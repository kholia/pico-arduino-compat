add_library(pac-esp_8_bit-color-composite-video-library INTERFACE)

target_sources(pac-esp_8_bit-color-composite-video-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP_8_BIT_composite/ESP_8_BIT_composite.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP_8_BIT_composite/ESP_8_BIT_GFX.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP_8_BIT_composite/ESP_8_BIT_composite.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP_8_BIT_composite/ESP_8_BIT_GFX.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP_8_BIT_composite/examples/AnimatedGIF/cat_and_galactic_squid.h"
)

target_include_directories(pac-esp_8_bit-color-composite-video-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP_8_BIT_composite"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_pac-adafruit-gfx-library)
endif()

target_link_libraries(pac-esp_8_bit-color-composite-video-library INTERFACE
    arduino-compat
    pac-adafruit-gfx-library
)
