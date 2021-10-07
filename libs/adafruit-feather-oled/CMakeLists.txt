add_library(pac-adafruit-feather-oled INTERFACE)

target_sources(pac-adafruit-feather-oled INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_FeatherOLED/Adafruit_FeatherOLED.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_FeatherOLED/Adafruit_FeatherOLED_SH110X_WiFi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_FeatherOLED/Adafruit_FeatherOLED_SH110X.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_FeatherOLED/Adafruit_FeatherOLED_WiFi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_FeatherOLED/Adafruit_FeatherOLED_WiFi.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_FeatherOLED/Adafruit_FeatherOLED_SH110X_WiFi.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_FeatherOLED/Adafruit_FeatherOLED.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_FeatherOLED/Adafruit_FeatherOLED_SH110X.h"
)

target_include_directories(pac-adafruit-feather-oled INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_FeatherOLED"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_pac-adafruit-gfx-library)
endif()

target_link_libraries(pac-adafruit-feather-oled INTERFACE
    arduino-compat
    pac-adafruit-gfx-library
)
