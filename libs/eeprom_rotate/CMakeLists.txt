add_library(pac-eeprom_rotate INTERFACE)

target_sources(pac-eeprom_rotate INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/eeprom_rotate/src/EEPROM_Rotate.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/eeprom_rotate/src/EEPROM_Rotate.h"
)

target_include_directories(pac-eeprom_rotate INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/eeprom_rotate/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-eeprom_rotate INTERFACE
    arduino-compat
)
