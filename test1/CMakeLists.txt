cmake_minimum_required (VERSION 3.10.1)
project(main)

add_executable(main main.cpp)
add_subdirectory(addnum)
add_subdirectory(mulnum)

target_link_libraries(main addnum mulnum)
