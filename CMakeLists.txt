cmake_minimum_required (VERSION 2.8.11)
project (drawEstim)
# The version number.
set (Tutorial_VERSION_MAJOR 0)
set (Tutorial_VERSION_MINOR 1)

find_package(PkgConfig)
pkg_check_modules(FANN fann)

SET(CMAKE_CXX_FLAGS "-std=c++11")
add_subdirectory (src)
