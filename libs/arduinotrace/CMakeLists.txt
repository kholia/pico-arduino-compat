add_library(arduinotrace INTERFACE)

target_sources(arduinotrace INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoTrace/extras/test/test_defaults.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoTrace/extras/test/test_alternative_serial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoTrace/extras/test/test_full_path.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoTrace/extras/test/test_disabled.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoTrace/ArduinoTrace.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoTrace/extras/test/myassert.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoTrace/extras/test/Arduino.h"
)

target_include_directories(arduinotrace INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoTrace"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arduinotrace INTERFACE
    arduino-compat
)
