add_library(pac-espxrgb INTERFACE)

target_sources(pac-espxrgb INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESPxRGB/src/ESPxRGB.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPxRGB/src/options.h"
)

target_include_directories(pac-espxrgb INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESPxRGB/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-espxrgb INTERFACE
    arduino-compat
)
