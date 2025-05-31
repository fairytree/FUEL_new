add_library(path_planner SHARED src/path_planner_api.cpp)

target_link_libraries(path_planner PRIVATE path_planner_algorithms)

target_include_directories(path_planner
  PUBLIC
    include
  PRIVATE
    ../implement/include
)