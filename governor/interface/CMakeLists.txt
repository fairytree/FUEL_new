add_library(governor SHARED src/governor_api.cpp)

target_link_libraries(governor PRIVATE governor_algorithms)

target_include_directories(governor
  PUBLIC
    include
  PRIVATE
    ../implement/erg/include
    ../implement/pathfg/include
)