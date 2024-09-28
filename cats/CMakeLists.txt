set(CATS_SOURCES
    src/Cats.cpp
    src/ScottishFold.cpp
)

add_library(cats SHARED ${CATS_SOURCES})
add_library(CMakeApp::cats ALIAS cats)
target_include_directories(cats PUBLIC include)