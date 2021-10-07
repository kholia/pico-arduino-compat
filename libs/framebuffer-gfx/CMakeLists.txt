add_library(pac-framebuffer-gfx INTERFACE)

target_sources(pac-framebuffer-gfx INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Framebuffer_GFX/Framebuffer_GFX.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Framebuffer_GFX/extras/gamma.c"
  "${CMAKE_CURRENT_LIST_DIR}/Framebuffer_GFX/gamma.h"
  "${CMAKE_CURRENT_LIST_DIR}/Framebuffer_GFX/Framebuffer_GFX.h"
)

target_include_directories(pac-framebuffer-gfx INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Framebuffer_GFX"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_pac-adafruit-gfx-library)
endif()

target_link_libraries(pac-framebuffer-gfx INTERFACE
    arduino-compat
    pac-adafruit-gfx-library
)
