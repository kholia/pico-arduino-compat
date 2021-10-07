add_library(pac-arduinouserinterface INTERFACE)

target_sources(pac-arduinouserinterface INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoUserInterface/src/ArduinoUserInterface.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoUserInterface/src/ArduinoUserInterface.h"
)

target_include_directories(pac-arduinouserinterface INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoUserInterface/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduinouserinterface INTERFACE
    arduino-compat
)
