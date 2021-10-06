add_library(adafruit-ssd1351-library INTERFACE)

target_sources(adafruit-ssd1351-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-SSD1351-library/Adafruit_SSD1351.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-SSD1351-library/Adafruit_SSD1351.h"
)

target_include_directories(adafruit-ssd1351-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit-SSD1351-library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(adafruit-ssd1351-library INTERFACE
    arduino-compat
)
