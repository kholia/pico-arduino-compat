add_library(hello-drum INTERFACE)

target_sources(hello-drum INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HelloDrum-arduino-Library/src/EEPROM_ESP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HelloDrum-arduino-Library/src/hellodrum.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HelloDrum-arduino-Library/src/EEPROM_ESP.h"
  "${CMAKE_CURRENT_LIST_DIR}/HelloDrum-arduino-Library/src/EEPROM.h"
  "${CMAKE_CURRENT_LIST_DIR}/HelloDrum-arduino-Library/src/hellodrum.h"
)

target_include_directories(hello-drum INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HelloDrum-arduino-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(hello-drum INTERFACE
    arduino-compat
)
