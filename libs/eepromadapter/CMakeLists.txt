add_library(pac-eepromadapter INTERFACE)

target_sources(pac-eepromadapter INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EEPROMAdapter/src/EEPROMSerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EEPROMAdapter/src/EEPROMAdapter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EEPROMAdapter/src/EEPROMSerial.h"
  "${CMAKE_CURRENT_LIST_DIR}/EEPROMAdapter/src/EEPROMAdapter.h"
)

target_include_directories(pac-eepromadapter INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EEPROMAdapter/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-eepromadapter INTERFACE
    arduino-compat
)
