#include "shmem_channel.hpp"

template <typename T>
shmem_channel<T>::shmem_channel(int channel, SHMEM_RIGHTS mode) : mode(mode)
{
    // Generate a key
    this->shm_key = ftok("shmfile", channel);

    // Check if shared memory associated with this key exists or it we need to create it
    bool shmem_creation_succeded = (shmget(this->shm_key, sizeof(data_frame<T>), 0666 | IPC_CREAT | IPC_EXCL) != -1);
    bool shmem_already_existent = (errno == EEXIST);
    if (shmem_creation_succeded)
    {
        this->shm_id = shmget(this->shm_key, sizeof(data_frame<T>), 0666) /* The creation succeded so we can get the id */
    }
    else if (!shmem_creation_succeded && shmem_already_existent)
    {
        this->shm_id = shmget(this->shm_key, sizeof(data_frame<T>), 0666) /* The creation failed cause the shm segment already exists */
    }
    else if (!shmem_creation_succeded && !shmem_already_existent) /* The creation failed cause of unknonw reasons. Except and do cleanup */
    {
        // Here there should be cleanup and exceptions or something
        std::cout << "Error creating shared mem";
    }

    // Attach to the shared memory
    this->shm_data = (data_frame<T> *)shmat(this->shm_id, nullptr, 0);
    if (this->shm_data == (data_frame<T> *)(-1))
    {
        // Here there should be cleanup and exceptions or something
        std::cout << "Couldn't attach to shared memory";
    }

    // Initalize if needed
    if (shmem_creation_succeded) /* If creation succeded, it means it was just created and we need to initialize */
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
T *shmem_channel<T>::get_shmem_data_accesor()
{
    return &(this->shm_data->data);
}