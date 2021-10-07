add_library(pac-thingsboard INTERFACE)

target_sources(pac-thingsboard INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ThingsBoard-Arduino-MQTT-SDK/src/ThingsBoard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ThingsBoard-Arduino-MQTT-SDK/src/ThingsBoard.h"
)

target_include_directories(pac-thingsboard INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ThingsBoard-Arduino-MQTT-SDK/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-thingsboard INTERFACE
    arduino-compat
)
