### GDExtensions

The gdextension used for implementing the ABI comes pre-built for Ubuntu, and as such, only needs to be dragged and dropped into the bin folder of the godot proyect (`${root_gd_proyect_dir}\bin\`)

Both the source code for the GDExtension and the scons build script are provided, and in case you wantint to build the extension yourself, you'll need to clone the (godot-cpp)[https://github.com/godotengine/godot-cpp] repository to this directory and follow the (oficial GDExtensiion tutorial)[https://docs.godotengine.org/es/4.x/tutorials/scripting/gdextension/gdextension_cpp_example.html]

**NOTE**: The godot-cpp version **must** match Godot's, otherwise the extension will NOT build correctly