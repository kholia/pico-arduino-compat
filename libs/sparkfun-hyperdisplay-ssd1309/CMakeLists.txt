add_library(sparkfun-hyperdisplay-ssd1309 INTERFACE)

target_sources(sparkfun-hyperdisplay-ssd1309 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HyperDisplay_SSD1309_ArduinoLibrary/src/HyperDisplay_SSD1309.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HyperDisplay_SSD1309_ArduinoLibrary/src/HyperDisplay_SSD1309.h"
)

target_include_directories(sparkfun-hyperdisplay-ssd1309 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HyperDisplay_SSD1309_ArduinoLibrary/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-hyperdisplay-ssd1309 INTERFACE
    arduino-compat
)
