cmake_minimum_required(VERSION 3.22)

project(LevelUp_PartTwo)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${LevelUp_PartTwo_SOURCE_DIR}/bin)

set(CMAKE_CXX_STANDARD 20)

add_executable(LevelUp_PartTwo
        Unordered_map.cpp
        )