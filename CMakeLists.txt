cmake_minimum_required(VERSION 3.29)
project(DynArr)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(DynArr
    DynamicArr.cpp
    DynamicArr.h
    main.cpp
        tests.cpp)
