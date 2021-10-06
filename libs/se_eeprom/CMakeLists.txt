add_library(se_eeprom INTERFACE)

target_sources(se_eeprom INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoIDE_SE_EEPROM/src/se_eeprom.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoIDE_SE_EEPROM/src/se_eeprom.h"
)

target_include_directories(se_eeprom INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoIDE_SE_EEPROM/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(se_eeprom INTERFACE
    arduino-compat
)
