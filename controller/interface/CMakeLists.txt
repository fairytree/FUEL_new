add_library(controller SHARED src/controller_api.cpp)

target_link_libraries(controller PRIVATE controller_algorithms)

target_include_directories(controller
  PUBLIC
    include
  PRIVATE
    ../implement/lqr/include
    ../implement/mpc/include
)