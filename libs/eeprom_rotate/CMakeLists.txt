add_library(eeprom_rotate INTERFACE)

target_sources(eeprom_rotate INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/eeprom_rotate/src/EEPROM_Rotate.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/eeprom_rotate/src/EEPROM_Rotate.h"
)

target_include_directories(eeprom_rotate INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/eeprom_rotate/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(eeprom_rotate INTERFACE
    arduino-compat
)
