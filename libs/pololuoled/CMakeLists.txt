add_library(pac-pololuoled INTERFACE)

target_sources(pac-pololuoled INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/pololu-oled-arduino/src/font.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/pololu-oled-arduino/examples/CustomFont/font.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/pololu-oled-arduino/src/PololuSH1106Main.h"
  "${CMAKE_CURRENT_LIST_DIR}/pololu-oled-arduino/src/PololuSH1106.h"
  "${CMAKE_CURRENT_LIST_DIR}/pololu-oled-arduino/src/PololuOLEDHelpers.h"
  "${CMAKE_CURRENT_LIST_DIR}/pololu-oled-arduino/src/PololuOLED.h"
  "${CMAKE_CURRENT_LIST_DIR}/pololu-oled-arduino/examples/CustomFont/font.h"
)

target_include_directories(pac-pololuoled INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/pololu-oled-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pololuoled INTERFACE
    arduino-compat
)
