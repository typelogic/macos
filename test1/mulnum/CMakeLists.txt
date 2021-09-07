cmake_minimum_required (VERSION 3.10.1)
project(mulnum)

set(CMAKE_C_COMPILER /usr/local/bin/gcc-11)
set(CMAKE_CXX_COMPILER /usr/local/bin/g++-11)

add_library(mulnum SHARED mulnum.cpp)
# target_compile_features(mulnum PRIVATE cxx_std_17)
