cmake_minimum_required(VERSION 3.10)

# Set the name of your project
project(my_project)

# Set the version number of your project
set(PROJECT_VERSION_MAJOR 1)
set(PROJECT_VERSION_MINOR 0)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# force googletest lib to be built the same way as the project
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
set(gtest_disable_pthreads ON CACHE BOOL "" FORCE)

# Add the Google Test library to your project
add_subdirectory(lib/googletest)

# Add include directory inc for header files
include_directories(inc)

# Create a library target for the code you want to test
add_library(my_library src/myclass.cpp)

# Add your source code to your project
add_executable(my_project src/main.cpp src/myclass.cpp)

# Link your executable with the Google Test library
# target_link_libraries(my_project gtest_main)

# Add a test target to your project
add_executable(my_project_test test/test_myclass.cpp)
target_link_libraries(my_project_test gtest_main my_library)
