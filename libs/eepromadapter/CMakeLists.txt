add_library(eepromadapter INTERFACE)

target_sources(eepromadapter INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EEPROMAdapter/src/EEPROMSerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EEPROMAdapter/src/EEPROMAdapter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EEPROMAdapter/src/EEPROMSerial.h"
  "${CMAKE_CURRENT_LIST_DIR}/EEPROMAdapter/src/EEPROMAdapter.h"
)

target_include_directories(eepromadapter INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EEPROMAdapter/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(eepromadapter INTERFACE
    arduino-compat
)
