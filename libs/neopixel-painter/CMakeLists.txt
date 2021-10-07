add_library(pac-neopixel-painter INTERFACE)

target_sources(pac-neopixel-painter INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/NeoPixelPainter/src/NeoPixelPainter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NeoPixelPainter/src/NeoPixelPainter.h"
)

target_include_directories(pac-neopixel-painter INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/NeoPixelPainter/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-neopixel-painter INTERFACE
    arduino-compat
)
