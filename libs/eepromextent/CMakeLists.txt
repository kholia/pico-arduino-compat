add_library(pac-eepromextent INTERFACE)

target_sources(pac-eepromextent INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EEPROMExtent/src/CircularBuffer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EEPROMExtent/src/EEPROM_ItemList.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EEPROMExtent/src/EEPROMextent.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EEPROMExtent/src/EEPROM_ItemList.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/EEPROMExtent/src/CircularBuffer.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/EEPROMExtent/VStudio/EEPROMextent.h"
  "${CMAKE_CURRENT_LIST_DIR}/EEPROMExtent/src/EEPROMextent.h"
)

target_include_directories(pac-eepromextent INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EEPROMExtent/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-eepromextent INTERFACE
    arduino-compat
)
