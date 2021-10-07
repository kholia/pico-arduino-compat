add_library(pac-tinyfontrenderer INTERFACE)

target_sources(pac-tinyfontrenderer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TinyFontRenderer/src/TinyFont.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyFontRenderer/src/TinyFontRenderer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyFontRenderer/src/TinyFont.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyFontRenderer/src/TinyFontRenderer.h"
)

target_include_directories(pac-tinyfontrenderer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TinyFontRenderer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tinyfontrenderer INTERFACE
    arduino-compat
)
