#ifndef SHMEM_CHANNEL_HPP
#define SHMEM_CHANNEL_HPP

#include <sys/shm.h>

#include <cerrno>
#include <cstring>
#include <iostream>
#include <mutex>

#define SHMEM_LOCATION "/tmp/shmem_channels"

enum SHMEM_RIGHTS
{
    READ = 0,
    WRITE = 1,
};

template <typename T>
struct data_frame
{
    __uint8_t flags;     // Atm only the bit in position 0x0001 is used. (To indicate wether the channel was initialized)
    __uint8_t ref_count; // Ref counter to know when to free the shared memory 
    T data; // Actual data in the frame
};

template <typename T>
class shmem_channel
{
private:
    SHMEM_RIGHTS mode;
    key_t shm_key;
    int shm_id;
    data_frame<T> *shm_data;

public:
    shmem_channel();
    shmem_channel(int channel_identifier, SHMEM_RIGHTS mode);
    shmem_channel(shmem_channel &&other) noexcept;               // Got i hate move constructors
    shmem_channel<T> &operator=(shmem_channel &&other) noexcept; // God i hate move semantics
    ~shmem_channel();
    T *get_shmem_data_accesor();
};

template <typename T>
shmem_channel<T>::shmem_channel() : shm_id(-1), shm_data(nullptr)
{
}

template <typename T>
shmem_channel<T>::shmem_channel(int channel_identifier, SHMEM_RIGHTS mode) : mode(mode)
{
    // Generate a key
    this->shm_key = ftok(SHMEM_LOCATION, channel_identifier);
    if (this->shm_key == -1)
    {
        switch (errno)
        {
        case ENOENT:
            // The shared memory location does not exist. Create it
            int sys_result;
            sys_result = system("touch " SHMEM_LOCATION);
            if (sys_result == 0)
            {
                this->shm_key = ftok(SHMEM_LOCATION, channel_identifier);
            }
            break;

        default:
            std::cout << "[SHMEM] Error getting a key for a shared memory segment" << std::endl;
            break;
        }
    }

    // Get the shared mem id using the key
    int shmem_returned_id = shmget(this->shm_key, sizeof(data_frame<T>), 0666 | IPC_CREAT);
    if (shmem_returned_id != -1)
    {
        // Everything worked and we have a valid id
        this->shm_id = shmem_returned_id; /* The creation succeded so we can get the id */
        std::cout << std::endl
                  << "[SHMEM] Attached to channel with key: " << this->shm_key << " and id: " << this->shm_id << std::endl;
    }
    else if (shmem_returned_id == -1)
    {
        switch (errno)
        {
        default:
            std::cout << std::endl
                      << "[SHMEM] Unknonw error when creating shared mem. Key: " << this->shm_key << " Error ID: " << errno << std::endl;
            break;
        }
    }

    // Attach to the shared memory
    this->shm_data = (data_frame<T> *)shmat(this->shm_id, nullptr, 0);
    if (this->shm_data == (data_frame<T> *)(-1))
    {
        // Here there should be cleanup and exceptions or something
        std::cout << "[SHMEM] Couldn't attach to shared memory. Error ID: " << errno << std::endl;
    }

    // Initialize if needed
    if (!(this->shm_data->flags & 0x0001))
    {
        // Inicializaciones de flags y tal i guess

        this->shm_data->flags |= 0x0001; // Set initialized flag
        this->shm_data->ref_count = 0;   // Initialize ref counter

        std::cout << std::endl
                  << "[SHMEM] Initialized channel with id: " << this->shm_id << std::endl;
    };
    // Update the reference count
    std::cout << "REF COUNT: " << (int)__sync_add_and_fetch(&(this->shm_data->ref_count), 1) << std::endl;
}

template <typename T>
shmem_channel<T>::shmem_channel(shmem_channel &&other) noexcept: shm_key(other.shm_key), shm_id(other.shm_id), shm_data(other.shm_data), mode(other.mode)
{
    other.shm_data = nullptr; // Ensure the moved-from object doesn't destruct shared memory
    other.shm_id = -1;
}

template <typename T>
shmem_channel<T> &shmem_channel<T>::operator=(shmem_channel &&other) noexcept
{
    if (this != &other)
    {
        std::cout << "[MOVE SEM] Mover from r-val REMOVE" << std::endl;
        std::cout << "CURR DATA POINTER" << this->shm_data;
        // Clean up the current resource
        if (this->shm_data && __sync_sub_and_fetch(&(this->shm_data->ref_count), 1) == 0) /* If there valid data in the instance we want to copy to, propperly deal with it*/
        {
            std::cout << "SHIT REACHED HERE 1";
            shmctl(shm_id, IPC_RMID, nullptr);
        }
        std::cout << "SHIT REACHED HERE 2";
        // Move ownership
        this->shm_key = other.shm_key;
        this->shm_id = other.shm_id;
        this->shm_data = other.shm_data;
        this->mode = other.mode;

        other.shm_data = nullptr;
        other.shm_id = -1;
    }
    return *this;
}

template <typename T>
shmem_channel<T>::~shmem_channel()
{
    std::cout << "[SHMEM] Trying to destroy id " << this->shm_id << " with rc of: " << (int)this->shm_data->ref_count << std::endl;
    if (this->shm_data && __sync_sub_and_fetch(&(this->shm_data->ref_count), 1) == 0)
    {
        std::cout << "[SHMEM] Closing channel" << std::endl;
        shmctl(this->shm_id, IPC_RMID, nullptr);
    }
}

template <typename T>
T *shmem_channel<T>::get_shmem_data_accesor()
{
    return &(this->shm_data->data);
}

#endif