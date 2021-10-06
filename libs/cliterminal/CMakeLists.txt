add_library(cliterminal INTERFACE)

target_sources(cliterminal INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CliTerminal/CliTerminal.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CliTerminal/CliTerminal.h"
)

target_include_directories(cliterminal INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CliTerminal"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(cliterminal INTERFACE
    arduino-compat
)
