add_library(eepromwearlevel INTERFACE)

target_sources(eepromwearlevel INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EEPROMWearLevel/src/EEPROMWearLevel.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EEPROMWearLevel/src/avr/EEPROMWearLevelAvr.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EEPROMWearLevel/src/megaavr/EEPROMWearLevelMegaavr.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EEPROMWearLevel/src/EEPROMWearLevel.h"
)

target_include_directories(eepromwearlevel INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EEPROMWearLevel/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(eepromwearlevel INTERFACE
    arduino-compat
)
