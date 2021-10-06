add_library(arduinodmx INTERFACE)

target_sources(arduinodmx INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoDMX/src/DMX.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoDMX/src/ArduinoDMX.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoDMX/src/DMX.h"
)

target_include_directories(arduinodmx INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoDMX/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arduinodmx INTERFACE
    arduino-compat
)
