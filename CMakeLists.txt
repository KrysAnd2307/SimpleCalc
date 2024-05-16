cmake_minimum_required(VERSION 3.27)
project(simpleCalc)

set(CMAKE_CXX_STANDARD 17)

add_executable(simpleCalc main.cpp
        calc.cpp
        calc.h)
