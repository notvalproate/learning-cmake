set(CATS_SOURCES
    src/Cats.cpp
    src/ScottishFold.cpp
)

add_library(cats SHARED ${CATS_SOURCES})
add_library(CMakeApp::cats ALIAS cats)
target_include_directories(cats PUBLIC include)

target_compile_options(cats
    PRIVATE
        -Wall
        -Wextra
        -Wpedantic
)

install(TARGETS cats 
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib
    RUNTIME DESTINATION bin
)

install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/include/
    DESTINATION include
)