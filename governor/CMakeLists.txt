cmake_minimum_required(VERSION 2.8.3)
project(governor)

set(CMAKE_BUILD_TYPE "Release")
set(CMAKE_CXX_FLAGS "-std=c++11")
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -Wall")

# Find dependencies
find_package(Eigen3 REQUIRED)
# find_package(PCL 1.7 REQUIRED)
find_package(catkin REQUIRED COMPONENTS
  plan_env
  path_planner    
  roscpp
  rospy
  std_msgs
)

catkin_package(
  INCLUDE_DIRS interface/include
  LIBRARIES governor
  CATKIN_DEPENDS plan_env path_planner
)

add_subdirectory(implement)
add_subdirectory(interface)
add_subdirectory(example)