add_library(serialeeprom INTERFACE)

target_sources(serialeeprom INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/serialEEPROM/src/serialEEPROM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/serialEEPROM/src/serialEEPROM.h"
)

target_include_directories(serialeeprom INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/serialEEPROM/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(serialeeprom INTERFACE
    arduino-compat
)
