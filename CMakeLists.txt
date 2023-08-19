cmake_minimum_required(VERSION 3.13)	# CMake version check
project(cpucpp)
set(CMAKE_CXX_STANDARD 14)				# Enable c++14 standard

# Add header and source files
include_directories(include)
file(GLOB SOURCE_FILES "src/*.cpp")

# Create executable
add_executable(cpucpp ${SOURCE_FILES})