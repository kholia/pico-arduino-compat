add_library(pac-ringeeprom INTERFACE)

target_sources(pac-ringeeprom INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RingEEPROM/src/RingEEPROM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RingEEPROM/src/RingEEPROM.h"
)

target_include_directories(pac-ringeeprom INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RingEEPROM/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ringeeprom INTERFACE
    arduino-compat
)
