add_library(pac-adafruit-ssd1331-oled-driver-library-for-arduino INTERFACE)

target_sources(pac-adafruit-ssd1331-oled-driver-library-for-arduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-SSD1331-OLED-Driver-Library-for-Arduino/Adafruit_SSD1331.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-SSD1331-OLED-Driver-Library-for-Arduino/Adafruit_SSD1331.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-SSD1331-OLED-Driver-Library-for-Arduino/examples/LCDGFXDemo/smileytongue24.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-SSD1331-OLED-Driver-Library-for-Arduino/examples/LCDGFXDemo/google32.h"
)

target_include_directories(pac-adafruit-ssd1331-oled-driver-library-for-arduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit-SSD1331-OLED-Driver-Library-for-Arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_pac-adafruit-gfx-library)
endif()

target_link_libraries(pac-adafruit-ssd1331-oled-driver-library-for-arduino INTERFACE
    arduino-compat
    pac-adafruit-gfx-library
)
