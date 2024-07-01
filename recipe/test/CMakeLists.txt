cmake_minimum_required (VERSION 3.0)

set (CMAKE_BUILD_TYPE "Release" CACHE STRING "build type")

project (qt5compat-test CXX)

find_package (Qt6 CONFIG REQUIRED COMPONENTS Core5Compat)

add_executable (test_qt5compat test_qt5compat.cpp)
target_link_libraries (test_qt5compat Qt6::Core5Compat)

enable_testing ()
add_test (NAME test_qt5compat COMMAND test_qt5compat)
