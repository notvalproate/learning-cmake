add_library(vmath INTERFACE)
add_library(CMakeApp::vmath ALIAS vmath)

target_include_directories(vmath INTERFACE include)