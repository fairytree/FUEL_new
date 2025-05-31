add_library(governor_algorithms SHARED
  erg/src/erg.cpp
  pathfg/src/pathfg.cpp
)

target_link_libraries(governor_algorithms PRIVATE
  ${catkin_LIBRARIES}
  ${Eigen3_LIBRARIES}
)

target_include_directories(governor_algorithms
  PRIVATE
    erg/include
    pathfg/include
  SYSTEM
  PRIVATE
    ${catkin_INCLUDE_DIRS}
    ${Eigen3_INCLUDE_DIRS}
)