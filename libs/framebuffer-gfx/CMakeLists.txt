add_library(framebuffer-gfx INTERFACE)

target_sources(framebuffer-gfx INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Framebuffer_GFX/Framebuffer_GFX.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Framebuffer_GFX/extras/gamma.c"
  "${CMAKE_CURRENT_LIST_DIR}/Framebuffer_GFX/gamma.h"
  "${CMAKE_CURRENT_LIST_DIR}/Framebuffer_GFX/Framebuffer_GFX.h"
)

target_include_directories(framebuffer-gfx INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Framebuffer_GFX"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_adafruit-gfx-library)
endif()

target_link_libraries(framebuffer-gfx INTERFACE
    arduino-compat
    adafruit-gfx-library
)
