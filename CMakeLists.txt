cmake_minimum_required(VERSION 3.9)

project(lgeometric)

message(STATUS "Configuring dependencies")

find_package(Git)
if(NOT GIT_FOUND)
    message(FATAL_ERROR "git is needed to install!")
endif()

file(MAKE_DIRECTORY libs)

if(NOT EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/libs/googletest")
    execute_process(
        COMMAND git clone https://github.com/google/googletest/ libs/googletest
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
        OUTPUT_VARIABLE git_output
    )
    message(STATUS "Gtest was not present, installing")
endif()

set(CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)