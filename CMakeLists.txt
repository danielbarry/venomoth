# CMakeLists.txt
#
# A simple make file for the project.

# The minimum version of cmake to be used in order to make this file
cmake_minimum_required (VERSION 2.6)

# The project name
project(sim CXX)

# The file to start compiling with
add_executable(sim src/main.cc)
