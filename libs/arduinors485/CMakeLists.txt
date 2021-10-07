add_library(pac-arduinors485 INTERFACE)

target_sources(pac-arduinors485 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoRS485/src/RS485.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoRS485/src/RS485.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoRS485/src/ArduinoRS485.h"
)

target_include_directories(pac-arduinors485 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoRS485/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduinors485 INTERFACE
    arduino-compat
)
