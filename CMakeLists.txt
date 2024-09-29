cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
    message("Setting build type to 'Debug' as none was specified.")
    set(CMAKE_BUILD_TYPE Debug CACHE STRING "Choose the type of build." FORCE)
    set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS "Debug" "Release" "MinSizeRel" "RelWithDebInfo")
endif()

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

target_compile_options(CMakeApp 
    PRIVATE
        -Wall
        -Wextra
        -Wpedantic
        -Werror
)

target_compile_definitions(CMakeApp 
    PRIVATE
        _SAY_HELLO
)

if(WIN32)
    target_compile_definitions(CMakeApp 
        PRIVATE
            _PLATFORM_WIN_32
    )
endif()