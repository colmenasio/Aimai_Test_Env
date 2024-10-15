#ifndef SIMPLE_CONTROLLER_H 
#define SIMPLE_CONTROLLER_H 

#include "common_structs/common_structs.hpp"
#include "shmem_channel/shmem_channel.hpp"

#include "godot_cpp/classes/vehicle_body3d.hpp"

#define RRC_COMMAND_SHMEM_CHANNEL 0
#define RRC_POSITION_SHMEM_CHANNEL 1

namespace godot {

class RemoteRaceCar: public VehicleBody3D {
	GDCLASS(RemoteRaceCar, VehicleBody3D)

private:
	shmem_channel<common_structs::RRCAR_COMMAND> command_channel;
	shmem_channel<common_structs::RRCAR_POSITION> position_channel;

	void read_commands();
	void write_position();

protected:
	static void _bind_methods();

public:
	RemoteRaceCar();
	~RemoteRaceCar();

	void _process(double delta) override{
		read_commands();
		write_position();
	}
};

}

#endif
