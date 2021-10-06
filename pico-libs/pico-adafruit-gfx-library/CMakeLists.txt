add_library(pico-adafruit-gfx-library INTERFACE)

target_sources(pico-adafruit-gfx-library INTERFACE
    ${CMAKE_CURRENT_LIST_DIR}/adafruit-gfx.cpp
    ${CMAKE_CURRENT_LIST_DIR}/adafruit-gfx.h
)

target_include_directories(pico-adafruit-gfx-library INTERFACE
    ${CMAKE_CURRENT_LIST_DIR}
)

if (NOT TARGET adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_gfx-library)
endif()

target_link_libraries(pico-adafruit-gfx-library INTERFACE
    adafruit-gfx-library
)
