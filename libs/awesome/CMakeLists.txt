add_library(awesome INTERFACE)

target_sources(awesome INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Awesome-Shield-Library/Awesome.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Awesome-Shield-Library/AS_Adafruit_NeoPixel.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Awesome-Shield-Library/AS_Suli.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Awesome-Shield-Library/AS_Four_Digit_Display.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Awesome-Shield-Library/esp8266.c"
  "${CMAKE_CURRENT_LIST_DIR}/Awesome-Shield-Library/AS_Four_Digit_Display.h"
  "${CMAKE_CURRENT_LIST_DIR}/Awesome-Shield-Library/AS_Adafruit_NeoPixel.h"
  "${CMAKE_CURRENT_LIST_DIR}/Awesome-Shield-Library/AS_Four_Digit_Display_Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/Awesome-Shield-Library/Awesome.h"
  "${CMAKE_CURRENT_LIST_DIR}/Awesome-Shield-Library/AS_Suli.h"
)

target_include_directories(awesome INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Awesome-Shield-Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(awesome INTERFACE
    arduino-compat
)
