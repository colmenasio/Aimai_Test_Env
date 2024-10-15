#include "shmem_channel.hpp"

template <typename T>
shmem_channel<T>::shmem_channel(int channel, SHMEM_RIGHTS mode) : mode(mode)
{
    bool shmem_needs_initialization;
    // Get the key
    this->shm_key = ftok("shmfile", channel);

    // Check if shared memory exists or create it if necessary

    this->shm_id = shmget(this->shm_key, sizeof(data_frame<T>), 0666 | IPC_CREAT | IPC_EXCL);
    if (this->shm_id == -1)
    {
        if (errno == EEXIST)
        {
            // The memory segment already exists.
            this->shm_id = shmget(this->shm_key, sizeof(data_frame<T>), 0666);
            shmem_needs_initialization = false;
        }
        else
        {
            std::cout << "Error creating shared mem";
        }
    }
    else
    {
        // The memory segment was just created. Initialize it
        shmem_needs_initialization = true;
    }

    // Attach to the shared memory
    this->shm_data = (data_frame<T> *)shmat(this->shm_id, nullptr, 0);
    if (this->shm_data == (data_frame<T> *)(-1))
    {
        std::cout << "Couldn't attach to shared memory";
    }

    // Initalize if needed
    if (shmem_needs_initialization)
    {
        memset(this->shm_data, 0, sizeof(data_frame<T>));
    }

    // Update reference count
    this->shm_data->ref_count++;
}

template <typename T>
shmem_channel<T>::~shmem_channel()
{
    this->shm_data->ref_count--;
    if (this->shm_data->ref_count == 0)
    {
        shmctl(this->shm_id, IPC_RMID, nullptr);
    }
}

template <typename T>
T* shmem_channel<T>::get_shmem_data_accesor()
{
    return &(this->shm_data->data);
}