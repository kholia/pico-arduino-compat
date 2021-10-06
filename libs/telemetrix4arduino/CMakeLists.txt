add_library(telemetrix4arduino INTERFACE)

target_sources(telemetrix4arduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Telemetrix4Arduino/Telemetrix4Arduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Telemetrix4Arduino/Telemetrix4Arduino.h"
)

target_include_directories(telemetrix4arduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Telemetrix4Arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(telemetrix4arduino INTERFACE
    arduino-compat
)
