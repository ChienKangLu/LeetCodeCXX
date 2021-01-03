# Works with 3.11 and tested through 3.19
cmake_minimum_required(VERSION 3.11...3.19)

# set the project name and version
project(
  LeeCodeCXX
  VERSION 0.1
  DESCRIPTION "LeetCode with C++"
  LANGUAGES CXX)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(src)

enable_testing()
include(GoogleTest)
add_subdirectory(tests)