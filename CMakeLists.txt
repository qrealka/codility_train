cmake_minimum_required(VERSION 3.3)
project(codility)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(codility ${SOURCE_FILES})
add_executable(TapeEquilibrium TapeEquilibrium.cpp)
add_executable(FrogRiverOne FrogRiverOne.cpp)
add_executable(MaxDistanceAdjacent MaxDistanceAdjacent.cpp)