cmake_minimum_required(VERSION 3.6)
project(CPPAssign6 VERSION 1.0)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
enable_testing()
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# GoogleTest via FetchContent
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/heads/main.zip
)
FetchContent_MakeAvailable(googletest)
include(GoogleTest)

# Library
add_library(StringFunctions STATIC src/StringFunctions.cpp)
target_include_directories(StringFunctions PUBLIC include)

# Executable
add_executable(StringApp src/StringApp.cpp)
target_link_libraries(StringApp PRIVATE StringFunctions)

# Tests
add_subdirectory(tests)