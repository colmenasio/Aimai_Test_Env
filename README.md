# Aimai_Test_Env

A test enviroment for Formula Student Driverless development interfacing between [MirenaSim](https://github.com/Ozuba/MirenaSim) and [Ros2](https://docs.ros.org/en/jazzy/Installation.html)

## Quick Start
This guide assumes the user is running Ubuntu 20.x.x and Godot 4.3 
### Setting up the Workspace
We'll start by setting up a basic workspace
```sh
mkdir aimai_test_env
cd aimai_test_env
git clone https://github.com/colmenasio/Aimai_Test_Env
```
Inside the root of the proyect we will clone MirenaSim:
```sh
cd aimai_test_env
git clone https://github.com/Ozuba/MirenaSim
tm MirenaSim/.git -fr
```
Finally, we move the pre-build GDExtension to the proyect's bin directory:
```sh
cd aimai_test_env
mv gdextension/prebuilts/linux/bin MirenaSim/bin
```

(*Aditionally*) If you plan on modifying the GDExtensions, clone as well the official godot-cpp build library:
```sh
cd gdextension
git clone -b 4.3 https://github.com/godotengine/godot-cpp
rm godot-cpp/.git -fr
```

###  
