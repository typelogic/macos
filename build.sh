#!/bin/sh
#

LOGDIR=/tmp/mylogs/
mkdir -p $LOGDIR/libs
exec > $LOGDIR/build.log 2>&1

rm -rf build
mkdir build
cd build
echo "******************************"
cmake ../test1
echo "******************************"
cmake --build .
echo "******************************"
./main
echo "******************************"
cp -v main $LOGDIR
cp -v addnum/libaddnum.dylib $LOGDIR/libs
cp -v mulnum/libmulnum.dylib $LOGDIR/libs
