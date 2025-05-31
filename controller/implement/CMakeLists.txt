
add_library(controller_algorithms SHARED 
    lqr/src/lqr.cpp
    mpc/src/mpc.cpp
)

target_link_libraries(controller_algorithms PRIVATE
  ${catkin_LIBRARIES}
  ${Eigen3_LIBRARIES}
)

target_include_directories(controller_algorithms
  PRIVATE
    lqr/include
    mpc/include
  SYSTEM
  PRIVATE
    ${catkin_INCLUDE_DIRS}
    ${Eigen3_INCLUDE_DIRS}
)