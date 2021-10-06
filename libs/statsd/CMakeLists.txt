add_library(statsd INTERFACE)

target_sources(statsd INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoStatsd/src/Statsd.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoStatsd/src/Statsd.h"
)

target_include_directories(statsd INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoStatsd/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(statsd INTERFACE
    arduino-compat
)
