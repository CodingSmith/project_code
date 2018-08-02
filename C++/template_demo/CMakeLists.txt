cmake_minimum_required(VERSION 2.8)
project(template_demo)

add_executable(template_demo ./main.cpp)
#target_link_libraries(fixed_vector )

install(TARGETS template_demo
      DESTINATION ${PROJECT_SOURCE_DIR}/bin)