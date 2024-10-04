project(vmath VERSION 2.0.0)

add_library(vmath INTERFACE)
add_library(CMakeApp::vmath ALIAS vmath)

set(VMATH_BINARY_INCLUDE_DIR ${CMAKE_CURRENT_BINARY_DIR}/include)
set(VMATH_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)

target_include_directories(vmath 
    INTERFACE 
        ${VMATH_INCLUDE_DIR}
        ${VMATH_BINARY_INCLUDE_DIR}
)

configure_file(
    ${VMATH_INCLUDE_DIR}/vmath/ver.hpp.in 
    ${VMATH_BINARY_INCLUDE_DIR}/vmath/ver.hpp
    @ONLY
)