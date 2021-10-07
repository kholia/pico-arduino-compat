add_library(pac-107-arduino-debug INTERFACE)

target_sources(pac-107-arduino-debug INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-Debug/src/ArduinoDebug.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-Debug/src/dtostrf.c"
)

target_include_directories(pac-107-arduino-debug INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-Debug/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-107-arduino-debug INTERFACE
    arduino-compat
)
