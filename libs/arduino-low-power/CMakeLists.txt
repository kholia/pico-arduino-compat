add_library(pac-arduino-low-power INTERFACE)

target_sources(pac-arduino-low-power INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLowPower/src/nrf52/ArduinoLowPower.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLowPower/src/samd/ArduinoLowPower.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLowPower/src/ArduinoLowPower.h"
)

target_include_directories(pac-arduino-low-power INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoLowPower/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduino-low-power INTERFACE
    arduino-compat
)
