cmake_minimum_required(VERSION 3.14)

project(main VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include(FetchContent)

FetchContent_Declare(
    raylib
    GIT_REPOSITORY https://github.com/raysan5/raylib.git
    GIT_TAG        5.0
)

FetchContent_MakeAvailable(raylib)

set(SOURCES
    src/main.cpp
    src/grid.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} PRIVATE raylib)
target_include_directories(main PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)