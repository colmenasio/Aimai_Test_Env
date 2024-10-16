#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "godot_interfaces::godot_interfaces__rosidl_generator_py" for configuration ""
set_property(TARGET godot_interfaces::godot_interfaces__rosidl_generator_py APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(godot_interfaces::godot_interfaces__rosidl_generator_py PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_NOCONFIG "godot_interfaces::godot_interfaces__rosidl_generator_c;Python3::Python;godot_interfaces::godot_interfaces__rosidl_typesupport_c"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libgodot_interfaces__rosidl_generator_py.so"
  IMPORTED_SONAME_NOCONFIG "libgodot_interfaces__rosidl_generator_py.so"
  )

list(APPEND _cmake_import_check_targets godot_interfaces::godot_interfaces__rosidl_generator_py )
list(APPEND _cmake_import_check_files_for_godot_interfaces::godot_interfaces__rosidl_generator_py "${_IMPORT_PREFIX}/lib/libgodot_interfaces__rosidl_generator_py.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
