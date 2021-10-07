add_library(pac-iot-pipe INTERFACE)

target_sources(pac-iot-pipe INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-arduino-iotpipe/src/iotpipe_sntp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-arduino-iotpipe/src/iotpipe_gpio.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-arduino-iotpipe/src/iotpipe.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-arduino-iotpipe/src/iotpipe_utils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-arduino-iotpipe/src/iotpipe_sntp.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-arduino-iotpipe/src/iotpipe_utils.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-arduino-iotpipe/src/iotpipe_gpio.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-arduino-iotpipe/src/iotpipe.h"
)

target_include_directories(pac-iot-pipe INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/esp8266-arduino-iotpipe/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-iot-pipe INTERFACE
    arduino-compat
)
