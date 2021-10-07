add_library(pac-arduinoirc INTERFACE)

target_sources(pac-arduinoirc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoIRC/src/IRCClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoIRC/src/IRCMessage.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoIRC/src/IRCClient.h"
)

target_include_directories(pac-arduinoirc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoIRC/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduinoirc INTERFACE
    arduino-compat
)
