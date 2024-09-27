cmake_minimum_required(VERSION 3.0)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(CMakeApp VERSION 1.0)

add_subdirectory(cprint)

set(SOURCES 
    src/main.cpp
    src/Cat.cpp
)

add_executable(CMakeApp ${SOURCES})
target_link_libraries(CMakeApp PRIVATE cprint)

target_include_directories(CMakeApp 
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
) 