cmake_minimum_required(VERSION 3.12)

project(lgeometric LANGUAGES CXX
                    HOMEPAGE_URL "https://github.com/lgruelas/lgeometric")

set(CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

message(STATUS "Configuring dependencies")

find_package(Git)
if(NOT GIT_FOUND)
    message(FATAL_ERROR "git is needed to install!")
endif()

file(MAKE_DIRECTORY libs)

if(NOT EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/libs/googletest")
    execute_process(
        COMMAND git clone -b release-1.10.0 --single-branch https://github.com/google/googletest.git libs/googletest
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
        OUTPUT_VARIABLE git_output
    )
    message(STATUS "Gtest was not present, installing")
endif()

add_library(${PROJECT_NAME} INTERFACE)

target_include_directories(
    ${PROJECT_NAME}
    INTERFACE $<BUILD_INTERFACE:${${PROJECT_NAME}_SOURCE_DIR}/include>
            $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>)

target_compile_features(${PROJECT_NAME} INTERFACE cxx_std_17)

if(BUILD_TESTS)
    add_subdirectory(tests)
    add_subdirectory(libs/googletest)
endif()
