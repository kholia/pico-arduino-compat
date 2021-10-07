add_library(pac-escapeautomate INTERFACE)

target_sources(pac-escapeautomate INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLib/src/EscapeAutomate2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLib/src/Puzzle.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLib/src/Objects/NumberProperty.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLib/src/Objects/BoolProperty.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLib/src/Objects/HubProperty.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLib/src/Objects/PuzzleProperty.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLib/src/Objects/BaseProperty.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLib/src/Objects/StringProperty.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLib/src/Objects/ListProperty .cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLib/src/EscapeAutomate2.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLib/src/Puzzle.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLib/src/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLib/src/EscLogs.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLib/src/Enums.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLib/src/Objects/ListProperty.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLib/src/Objects/BaseProperty.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLib/src/Objects/NumberProperty.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLib/src/Objects/PuzzleProperty.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLib/src/Objects/StringProperty.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLib/src/Objects/HubProperty.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLib/src/Objects/BoolProperty.h"
)

target_include_directories(pac-escapeautomate INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoLib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-escapeautomate INTERFACE
    arduino-compat
)
