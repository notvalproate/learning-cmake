set(CPRINT_SOURCES
    src/cprint.cpp
)

add_library(cprint STATIC ${CPRINT_SOURCES})
target_include_directories(cprint PUBLIC include)

target_compile_options(cprint
    PRIVATE
        ${CXX_WARNING_FLAGS}
)

install(TARGETS cprint
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib
    RUNTIME DESTINATION bin
)

install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/include/
    DESTINATION include
)