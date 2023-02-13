cmake_minimum_required(VERSION 3.25)

project(RNG VERSION 1.0.0 DESCRIPTION "Random Number Generator")

set(CMAKE_CXX_STANDARD 20)
add_library(${PROJECT_NAME} OBJECT
			NonCopyable.h
			CPUInfo.h
			CPUInfo.cpp
			RNG.h
			RNG.cpp)

set_target_properties(${PROJECT_NAME} PROPERTIES PUBLIC_HEADER ${PROJECT_SOURCE_DIR}/RNG.h)

set(RANDOM_FLAG -mrdseed -mrdrnd)
target_compile_options(${PROJECT_NAME} PRIVATE ${RANDOM_FLAG})
