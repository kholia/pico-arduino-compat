add_library(neteeprom INTERFACE)

target_sources(neteeprom INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/NetEEPROM/src/NetEEPROM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NetEEPROM/src/NetEEPROM.h"
)

target_include_directories(neteeprom INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/NetEEPROM/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(neteeprom INTERFACE
    arduino-compat
)
