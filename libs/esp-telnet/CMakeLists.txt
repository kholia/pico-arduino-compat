add_library(pac-esp-telnet INTERFACE)

target_sources(pac-esp-telnet INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESPTelnet/src/ESPTelnet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPTelnet/src/ESPTelnet.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPTelnet/src/DebugMacros.h"
)

target_include_directories(pac-esp-telnet INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESPTelnet/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-esp-telnet INTERFACE
    arduino-compat
)
