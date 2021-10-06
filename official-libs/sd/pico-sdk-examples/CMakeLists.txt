cmake_minimum_required(VERSION 3.12)

include(pico_sdk_import.cmake)

project(sd-examples)

pico_sdk_init()

add_subdirectory(.. build)

add_executable(example-dumpfile
    DumpFile/DumpFile.cpp
)

target_link_libraries(example-dumpfile 
    official-sd
)

pico_add_extra_outputs(example-dumpfile)


