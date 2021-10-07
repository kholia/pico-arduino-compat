add_library(pac-telnetstream2 INTERFACE)

target_sources(pac-telnetstream2 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TelnetStream2/src/TelnetStream2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TelnetStream2/src/TelnetStream2.h"
)

target_include_directories(pac-telnetstream2 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TelnetStream2/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-telnetstream2 INTERFACE
    arduino-compat
)
