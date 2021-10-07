add_library(pac-eepromtyped INTERFACE)

target_sources(pac-eepromtyped INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EEPROMTyped/src/EEPROMTyped.h"
)

target_include_directories(pac-eepromtyped INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EEPROMTyped/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-eepromtyped INTERFACE
    arduino-compat
)
