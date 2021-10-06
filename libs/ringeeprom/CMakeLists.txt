add_library(ringeeprom INTERFACE)

target_sources(ringeeprom INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RingEEPROM/src/RingEEPROM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RingEEPROM/src/RingEEPROM.h"
)

target_include_directories(ringeeprom INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RingEEPROM/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ringeeprom INTERFACE
    arduino-compat
)
