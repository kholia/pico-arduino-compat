add_library(pac-adafruit-thermal-printer-library INTERFACE)

target_sources(pac-adafruit-thermal-printer-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-Thermal-Printer-Library/Adafruit_Thermal.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-Thermal-Printer-Library/Adafruit_Thermal.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-Thermal-Printer-Library/examples/A_printertest/adalogo.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-Thermal-Printer-Library/examples/A_printertest/adaqrcode.h"
)

target_include_directories(pac-adafruit-thermal-printer-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit-Thermal-Printer-Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adafruit-thermal-printer-library INTERFACE
    arduino-compat
)
