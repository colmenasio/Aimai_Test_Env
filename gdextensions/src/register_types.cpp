#include <gdextension_interface.h>
#include <godot_cpp/core/defs.hpp>
#include <godot_cpp/godot.hpp>

// Register header
#include "register_types.hpp"

// Modules we want to register
#include "remote_race_car.hpp"

using namespace godot;

void initialize_rrc_module(ModuleInitializationLevel p_level) {
    switch (p_level){
    case MODULE_INITIALIZATION_LEVEL_SCENE:
        GDREGISTER_CLASS(RemoteRaceCar); 
        break; 
    default:
        break;
    }
    return;
}

void uninitialize_rrc_module(ModuleInitializationLevel p_level) {
    switch (p_level){ 
    default:
        break;
    }
    return;
}

extern "C" {
// Initialization.
GDExtensionBool GDE_EXPORT rrc_library_init(GDExtensionInterfaceGetProcAddress p_get_proc_address, const GDExtensionClassLibraryPtr p_library, GDExtensionInitialization *r_initialization) {
	
    godot::GDExtensionBinding::InitObject init_obj(p_get_proc_address, p_library, r_initialization);

	init_obj.register_initializer(initialize_rrc_module);
	init_obj.register_terminator(uninitialize_rrc_module);
	init_obj.set_minimum_library_initialization_level(MODULE_INITIALIZATION_LEVEL_SCENE);

	return init_obj.init();
}
}