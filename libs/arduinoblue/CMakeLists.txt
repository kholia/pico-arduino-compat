add_library(arduinoblue INTERFACE)

target_sources(arduinoblue INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoBlue-library/src/ArduinoBlue.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoBlue-library/src/FunctionType.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoBlue-library/src/ArduinoBlue.h"
)

target_include_directories(arduinoblue INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoBlue-library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arduinoblue INTERFACE
    arduino-compat
)
