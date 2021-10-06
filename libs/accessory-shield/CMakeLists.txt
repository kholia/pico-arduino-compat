add_library(accessory-shield INTERFACE)

target_sources(accessory-shield INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AccessoryShield/src/Oled.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AccessoryShield/src/AccessoryShield.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AccessoryShield/src/Oled.h"
  "${CMAKE_CURRENT_LIST_DIR}/AccessoryShield/src/AccessoryShield.h"
)

target_include_directories(accessory-shield INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AccessoryShield/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_adafruit-gfx-library)
endif()

target_link_libraries(accessory-shield INTERFACE
    arduino-compat
    adafruit-gfx-library
)
