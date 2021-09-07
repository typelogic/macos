#!/bin/sh
#

rm -rf build
mkdir build
cd build
cmake ../test1
cmake --build .
./main
