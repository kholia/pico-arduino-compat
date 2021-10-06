add_library(exteeprom INTERFACE)

target_sources(exteeprom INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/extEEPROM/extEEPROM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/extEEPROM/extEEPROM.h"
)

target_include_directories(exteeprom INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/extEEPROM"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(exteeprom INTERFACE
    arduino-compat
)
