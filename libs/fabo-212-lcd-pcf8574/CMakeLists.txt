add_library(fabo-212-lcd-pcf8574 INTERFACE)

target_sources(fabo-212-lcd-pcf8574 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FaBoLCD-PCF8574-Library/src/FaBoLCD_PCF8574.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FaBoLCD-PCF8574-Library/src/FaBoLCD_PCF8574.h"
)

target_include_directories(fabo-212-lcd-pcf8574 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FaBoLCD-PCF8574-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(fabo-212-lcd-pcf8574 INTERFACE
    arduino-compat
)
