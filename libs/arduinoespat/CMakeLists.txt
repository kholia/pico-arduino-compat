add_library(arduinoespat INTERFACE)

target_sources(arduinoespat INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoESPAT-Library/src/ArduinoESPAT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoESPAT-Library/src/ArduinoESPAT.h"
)

target_include_directories(arduinoespat INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoESPAT-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arduinoespat INTERFACE
    arduino-compat
)
