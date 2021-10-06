add_library(makervision INTERFACE)

target_sources(makervision INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLibrary/MVServo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLibrary/PololuLedStrip.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLibrary/PololuLedStrip.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLibrary/MVServo.h"
)

target_include_directories(makervision INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoLibrary"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(makervision INTERFACE
    arduino-compat
)
