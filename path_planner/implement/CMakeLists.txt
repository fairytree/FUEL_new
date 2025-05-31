add_library(path_planner_algorithms SHARED
  src/astar2.cpp
  src/kinodynamic_astar.cpp
  src/topo_prm.cpp
  src/rrtstar.cpp
  src/potential_field.cpp
)

target_link_libraries(path_planner_algorithms PRIVATE
  ${catkin_LIBRARIES}
  ${Eigen3_LIBRARIES}
  ${PCL_LIBRARIES}
)

target_include_directories(path_planner_algorithms
  PRIVATE
    include
  SYSTEM
  PRIVATE
    ${catkin_INCLUDE_DIRS}
    ${Eigen3_INCLUDE_DIRS}
    ${PCL_INCLUDE_DIRS}
)