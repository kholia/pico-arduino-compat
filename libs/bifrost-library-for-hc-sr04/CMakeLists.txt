add_library(pac-bifrost-library-for-hc-sr04 INTERFACE)

target_sources(pac-bifrost-library-for-hc-sr04 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Bifrost.Arduino.Sensors.HCSR04/src/hcsr04.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Bifrost.Arduino.Sensors.HCSR04/src/hcsr04.h"
)

target_include_directories(pac-bifrost-library-for-hc-sr04 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Bifrost.Arduino.Sensors.HCSR04/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-bifrost-library-for-hc-sr04 INTERFACE
    arduino-compat
)
