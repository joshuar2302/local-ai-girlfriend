cmake_minimum_required(VERSION 3.16)
project(local-ai-girlfriend CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(localaigirlfriend
    src/main.cpp
    src/persona.cpp
    src/memory.cpp
    src/voice.cpp
)

target_include_directories(localaigirlfriend PRIVATE include)

if(WIN32)
    target_link_libraries(localaigirlfriend PRIVATE userenv)
endif()
