#include <chrono>
#include <iostream>

#include "common_structs/common_structs.hpp"
#include "common_data/common_data.hpp"
#include "shmem_channel/shmem_channel.hpp"

#include "rclcpp/rclcpp.hpp"

using namespace std::chrono_literals;

class WaveDriver : public rclcpp::Node
{

private:
    // Communicacion Channel
    ShmemChannel<common_structs::RRCAR_COMMAND> command_channel;

    // Node attributes
    rclcpp::TimerBase::SharedPtr timer;

    // Normal attributes
    int8_t counter;

public:
    WaveDriver() : Node("waveDriver"), command_channel(RRC_COMMAND_SHMEM_CHANNEL, SHMEM_RIGHTS::WRITE),  counter(0)
    {
        // Initialize the command channel
        //this->command_channel = shmem_channel<common_structs::RRCAR_COMMAND>(RRC_COMMAND_SHMEM_CHANNEL, SHMEM_RIGHTS::WRITE);
        // Update the node each 1/4 of a second
        this->timer = this->create_wall_timer(250ms, std::bind(&WaveDriver::update, this));
    }

    ~WaveDriver()
    {
        std::cout << "Destroying node" << std::endl;
    }

    void update()
    {
        // Half decent sine wave i guess
        this->counter++;
        double gas_val, steer_val, brake_val;
        gas_val = 800l;
        steer_val = MAX_STEER * 1/32 * sin(2 * 3.1415 * (double)this->counter/32);
        brake_val = 0l;
        auto command_accessor = this->command_channel.get_shmem_data_accesor();
        command_accessor->gas = gas_val;
        command_accessor->steer = steer_val;
        command_accessor->brake = brake_val;
        RCLCPP_INFO(this->get_logger(), "I sent the following values: Motor->%lf, Steer->%lf, Brake->%lf", gas_val, steer_val, brake_val);
    }
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<WaveDriver>());
    rclcpp::shutdown();
    return 0;
}