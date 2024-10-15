#ifndef SHMEM_CHANNEL_HPP
#define SHMEM_CHANNEL_HPP

#include <sys/shm.h>
#include <cerrno>
#include <cstring>
#include <iostream>

#define SHM_BASE_KEY "shmem_channel"

enum SHMEM_RIGHTS{
    READ = 0,
    WRITE = 1,
};

template<typename T>
struct data_frame
{
    __uint8_t flags; // Atm there are no flags but just in case lmao
    __uint8_t ref_count; // Ref counter to know when to free the shared memory
    T data; // Actual data in the frame
};

template<typename T>
class shmem_channel
{
private:
    SHMEM_RIGHTS mode;  
    key_t shm_key;
    int shm_id;
    data_frame<T>* shm_data;

public:
    shmem_channel();
    shmem_channel(int channel, SHMEM_RIGHTS mode);
    ~shmem_channel();
    T* get_shmem_data_accesor();
};

#endif