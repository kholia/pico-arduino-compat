add_library(pac-arduinodmx INTERFACE)

target_sources(pac-arduinodmx INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoDMX/src/DMX.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoDMX/src/ArduinoDMX.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoDMX/src/DMX.h"
)

target_include_directories(pac-arduinodmx INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoDMX/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduinodmx INTERFACE
    arduino-compat
)
