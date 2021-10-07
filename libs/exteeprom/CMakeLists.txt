add_library(pac-exteeprom INTERFACE)

target_sources(pac-exteeprom INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/extEEPROM/extEEPROM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/extEEPROM/extEEPROM.h"
)

target_include_directories(pac-exteeprom INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/extEEPROM"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-exteeprom INTERFACE
    arduino-compat
)
