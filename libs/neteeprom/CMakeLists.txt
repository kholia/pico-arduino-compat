add_library(pac-neteeprom INTERFACE)

target_sources(pac-neteeprom INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/NetEEPROM/src/NetEEPROM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NetEEPROM/src/NetEEPROM.h"
)

target_include_directories(pac-neteeprom INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/NetEEPROM/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-neteeprom INTERFACE
    arduino-compat
)
