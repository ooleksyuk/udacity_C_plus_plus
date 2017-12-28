cmake_minimum_required(VERSION 3.8)
project(Vectors)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        main.cpp mainFunctions.cpp)

add_executable(Vectors ${SOURCE_FILES} mainFunctions.cpp)