#ifndef COMMON_STRUCTS_HPP
#define COMMON_STRUCTS_HPP

namespace common_structs{
    struct RRCAR_COMMAND{
        double gas;
        double brake;
        double steer; // Counter-clockwise horizontal rotation with origin in the z-axis in radians
    };
    struct RRCAR_POSITION
    {
        double xpos;
        double zpos;
        double angle; // Counter-clockwise horizontal rotation with origin in the z-axis 
    };
    
}

#endif