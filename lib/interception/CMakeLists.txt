cmake_minimum_required(VERSION 3.11)
project(interception)

add_library(interception SHARED interception.c interception.rc)
target_compile_definitions(interception PRIVATE INTERCEPTION_EXPORT)

if(MSVC)
    target_compile_options(l2cvbot PRIVATE /W4)
else()
    target_compile_options(l2cvbot PRIVATE -Wall -Wextra -pedantic)
endif()
