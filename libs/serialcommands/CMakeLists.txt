add_library(pac-serialcommands INTERFACE)

target_sources(pac-serialcommands INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-SerialCommands/src/SerialCommands.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-SerialCommands/src/SerialCommands.h"
)

target_include_directories(pac-serialcommands INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-SerialCommands/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-serialcommands INTERFACE
    arduino-compat
)
