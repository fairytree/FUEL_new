
add_executable(controller_manager
  controller_manager_main.cpp  
  src/topic_manager.cpp
)

target_link_libraries(controller_manager 
PRIVATE 
  controller_manager_implement
  ${catkin_LIBRARIES}
)

target_include_directories(controller_manager
  PUBLIC
    include
  PRIVATE
    ../implement/fsm/include
    ../implement/logics/include
    ${catkin_INCLUDE_DIRS}  
)


