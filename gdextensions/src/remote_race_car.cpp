#include "remote_race_car.hpp"
#include <iostream>

using namespace godot;

void RemoteRaceCar::_bind_methods(){
    
}

RemoteRaceCar::RemoteRaceCar(){
    this->command_channel = shmem_channel<common_structs::RRCAR_COMMAND>(RRC_COMMAND_SHMEM_CHANNEL, SHMEM_RIGHTS::READ);
    this->position_channel = shmem_channel<common_structs::RRCAR_POSITION>(RRC_POSITION_SHMEM_CHANNEL, SHMEM_RIGHTS::WRITE);
}

RemoteRaceCar::~RemoteRaceCar(){
}

void RemoteRaceCar::read_commands(){
   auto commands_accessor = this->command_channel.get_shmem_data_accesor();
   this->set_engine_force(commands_accessor->gas);
   this->set_brake(commands_accessor->brake);
   this->set_steering(commands_accessor->steer);
}

void RemoteRaceCar::write_position(){
    auto position_accessor = this->position_channel.get_shmem_data_accesor();
    position_accessor->xpos = this->get_position().AXIS_X;
    position_accessor->zpos = this->get_position().AXIS_Z;
    position_accessor->angle = this->get_rotation().AXIS_Y;
}

// Explicitly instantiate the template for RRCAR_POSITION
template class shmem_channel<common_structs::RRCAR_COMMAND>;
template class shmem_channel<common_structs::RRCAR_POSITION>;
