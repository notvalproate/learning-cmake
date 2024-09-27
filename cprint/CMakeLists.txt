add_library(cprint STATIC ${CMAKE_CURRENT_SOURCE_DIR}/src/cprint.cpp)
target_include_directories(cprint PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)