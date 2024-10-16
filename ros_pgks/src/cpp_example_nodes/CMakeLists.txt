cmake_minimum_required(VERSION 3.8)
project(cpp_example_nodes)

set(CURR_WD /home/colmenasio/Personal/Proyects/Racing/aimai_test_env_beta/)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)
find_package(rclcpp REQUIRED)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

add_executable(waveDriver src/wave_driver.cpp ${CURR_WD}common/common_structs/common_structs.hpp ${CURR_WD}common/common_data/common_data.hpp ${CURR_WD}common/shmem_channel/shmem_channel.hpp)
ament_target_dependencies(waveDriver rclcpp)
target_include_directories(waveDriver PRIVATE ${CURR_WD}common/)

add_executable(positionAnnouncer src/position_announcer.cpp ${CURR_WD}common/common_structs/common_structs.hpp ${CURR_WD}common/common_data/common_data.hpp ${CURR_WD}common/shmem_channel/shmem_channel.hpp)
ament_target_dependencies(positionAnnouncer rclcpp)
target_include_directories(positionAnnouncer PRIVATE ${CURR_WD}common/)

install(TARGETS
  waveDriver 
  positionAnnouncer
  DESTINATION lib/${PROJECT_NAME})

ament_package()
