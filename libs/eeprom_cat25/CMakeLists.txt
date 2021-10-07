add_library(pac-eeprom_cat25 INTERFACE)

target_sources(pac-eeprom_cat25 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EEPROM_CAT25/src/EEPROM_CAT25.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EEPROM_CAT25/src/EEPROM_CAT25.h"
)

target_include_directories(pac-eeprom_cat25 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EEPROM_CAT25/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-eeprom_cat25 INTERFACE
    arduino-compat
)
