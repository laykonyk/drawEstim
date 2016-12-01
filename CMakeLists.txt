cmake_minimum_required (VERSION 2.8.11)
project (drawEstim)
# The version number.
set (drawEstim_VERSION_MAJOR 0)
set (drawEstim_VERSION_MINOR 1)

find_package(PkgConfig)
pkg_check_modules(FANN fann)
pkg_check_modules(GTEST REQUIRED gtest)
include_directories(
    ${GTEST_INCLUDE_DIRS}
)
SET(CMAKE_CXX_FLAGS "-std=c++14")
add_subdirectory (src)
add_subdirectory (test)
