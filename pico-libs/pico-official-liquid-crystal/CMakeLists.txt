add_library(pico-official-liquid-crystal INTERFACE)

target_sources(pico-official-liquid-crystal INTERFACE
    ${CMAKE_CURRENT_LIST_DIR}/liquid-crystal.cpp
    ${CMAKE_CURRENT_LIST_DIR}/liquid-crystal.h
)

target_include_directories(pico-official-liquid-crystal INTERFACE
    ${CMAKE_CURRENT_LIST_DIR}
)

if (NOT TARGET official-liquid-crystal)
    add_subdirectory(../../official-libs/liquid-crystal build_official-liquid-crystal)
endif()

target_link_libraries(pico-official-liquid-crystal INTERFACE
    official-liquid-crystal
)
