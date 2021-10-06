add_library(arduinouserinterface INTERFACE)

target_sources(arduinouserinterface INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoUserInterface/src/ArduinoUserInterface.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoUserInterface/src/ArduinoUserInterface.h"
)

target_include_directories(arduinouserinterface INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoUserInterface/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arduinouserinterface INTERFACE
    arduino-compat
)
