add_library(tinyfontrenderer INTERFACE)

target_sources(tinyfontrenderer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TinyFontRenderer/src/TinyFont.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyFontRenderer/src/TinyFontRenderer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyFontRenderer/src/TinyFont.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyFontRenderer/src/TinyFontRenderer.h"
)

target_include_directories(tinyfontrenderer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TinyFontRenderer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tinyfontrenderer INTERFACE
    arduino-compat
)
