add_library(lc_neopixel INTERFACE)

target_sources(lc_neopixel INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LC_neoPixel/src/neoPixel.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LC_neoPixel/src/chainPixels.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LC_neoPixel/src/imgNeoPixel.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LC_neoPixel/examples/goggle_lights/theRings.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LC_neoPixel/src/neoPixel.h"
  "${CMAKE_CURRENT_LIST_DIR}/LC_neoPixel/src/imgNeoPixel.h"
  "${CMAKE_CURRENT_LIST_DIR}/LC_neoPixel/src/chainPixels.h"
  "${CMAKE_CURRENT_LIST_DIR}/LC_neoPixel/examples/goggle_lights/theRings.h"
)

target_include_directories(lc_neopixel INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LC_neoPixel/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(lc_neopixel INTERFACE
    arduino-compat
)
