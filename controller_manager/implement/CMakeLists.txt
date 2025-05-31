add_library(controller_manager_implement SHARED
  fsm/src/fsm.cpp
  logics/src/logics.cpp
)

target_link_libraries(controller_manager_implement PRIVATE
  ${catkin_LIBRARIES}
  ${Eigen3_LIBRARIES}
)

target_include_directories(controller_manager_implement
  PRIVATE
    fsm/include
    logics/include
  SYSTEM
  PRIVATE
    ${catkin_INCLUDE_DIRS}
    ${Eigen3_INCLUDE_DIRS}
)