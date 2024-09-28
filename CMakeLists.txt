cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_BUILD_TYPE Release)

project(CMakeApp VERSION 1.0)

add_subdirectory(cprint)
add_subdirectory(cats)

find_package(ZLIB REQUIRED)

set(SOURCES
    src/main.cpp
    src/Cat.cpp
)

add_executable(CMakeApp ${SOURCES})

target_link_libraries(CMakeApp 
    PRIVATE
        cprint
        CMakeApp::cats
        ${ZLIB_LIBRARIES}
)

target_include_directories(CMakeApp 
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        ${ZLIB_INCLUDE_DIRS}
) 