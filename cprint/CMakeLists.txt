set(CPRINT_SOURCES
    src/cprint.cpp
)

add_library(cprint STATIC ${CPRINT_SOURCES})
target_include_directories(cprint PUBLIC include)