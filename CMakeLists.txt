cmake_minimum_required(VERSION 3.21)

project(CMakeCppExample LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include(FetchContent)

FetchContent_Declare(
    fmt
    GIT_REPOSITORY https://github.com/fmtlib/fmt
    GIT_TAG 11.0.2
    GIT_SHALLOW ON
)

FetchContent_MakeAvailable(fmt)

add_subdirectory(src/library)
add_subdirectory(src/executable)
