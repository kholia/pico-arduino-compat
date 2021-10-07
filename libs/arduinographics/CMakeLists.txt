add_library(pac-arduinographics INTERFACE)

target_sources(pac-arduinographics INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoGraphics/src/ArduinoGraphics.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoGraphics/src/Image.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoGraphics/src/Font_4x6.c"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoGraphics/src/Font_5x7.c"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoGraphics/src/Image.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoGraphics/src/Font.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoGraphics/src/ArduinoGraphics.h"
)

target_include_directories(pac-arduinographics INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoGraphics/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduinographics INTERFACE
    arduino-compat
)
