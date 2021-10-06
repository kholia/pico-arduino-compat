add_library(espxrgb INTERFACE)

target_sources(espxrgb INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESPxRGB/src/ESPxRGB.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPxRGB/src/options.h"
)

target_include_directories(espxrgb INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESPxRGB/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(espxrgb INTERFACE
    arduino-compat
)
