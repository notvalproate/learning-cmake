macro(add_to_catch2 _source)
    set(_libs ${ARGN})

    add_executable(${_source} test/${_source}.cpp)
    target_link_libraries(${_source} 
        PRIVATE 
            Catch2::Catch2WithMain
            ${_libs}
    )
    add_test(NAME ${_source} COMMAND ${_source})
endmacro()