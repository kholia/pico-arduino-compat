add_library(pac-eeprom32_rotate INTERFACE)

target_sources(pac-eeprom32_rotate INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/eeprom32_rotate/src/EEPROM32_Rotate.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/eeprom32_rotate/src/EEPROM32_Rotate.h"
)

target_include_directories(pac-eeprom32_rotate INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/eeprom32_rotate/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-eeprom32_rotate INTERFACE
    arduino-compat
)
