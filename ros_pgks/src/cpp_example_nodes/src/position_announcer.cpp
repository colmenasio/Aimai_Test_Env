#include <chrono>
#include <iostream>

#include "common_structs/common_structs.hpp"
#include "common_data/common_data.hpp"
#include "shmem_channel/shmem_channel.hpp"

#include "rclcpp/rclcpp.hpp"

using namespace std::chrono_literals;

class PositionAnnouncer: public rclcpp::Node
{

private:
    // Communicacion Channel
    ShmemChannel<common_structs::RRCAR_POSITION> position_channel;

    // Node attributes
    rclcpp::TimerBase::SharedPtr timer;

public:
    PositionAnnouncer() : Node("PositionAnnouncer"), position_channel(RRC_COMMAND_SHMEM_CHANNEL, SHMEM_RIGHTS::READ)
    {
        // Initialize the command channel
        //this->command_channel = shmem_channel<common_structs::RRCAR_COMMAND>(RRC_COMMAND_SHMEM_CHANNEL, SHMEM_RIGHTS::WRITE);
        // Update the node each 1/4 of a second
        this->timer = this->create_wall_timer(250ms, std::bind(&PositionAnnouncer::update, this));
    }

    ~PositionAnnouncer()
    {
        std::cout << "Destroying node" << std::endl;
    }

    void update()
{
        // Read the position and print it
        auto position_accessor = this->position_channel.get_shmem_data_accesor();
        RCLCPP_INFO(this->get_logger(), "I m currently at: x->%lf, z->%lf, angle->%lf", position_accessor->xpos, position_accessor->zpos, position_accessor->angle);
    }
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<PositionAnnouncer>());
    rclcpp::shutdown();
    return 0;
}