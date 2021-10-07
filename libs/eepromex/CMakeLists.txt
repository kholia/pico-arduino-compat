add_library(pac-eepromex INTERFACE)

target_sources(pac-eepromex INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-EEPROMEx/EEPROMex.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-EEPROMEx/EEPROMex.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-EEPROMEx/EEPROMVar.h"
)

target_include_directories(pac-eepromex INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-EEPROMEx"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-eepromex INTERFACE
    arduino-compat
)
