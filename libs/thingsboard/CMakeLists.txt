add_library(thingsboard INTERFACE)

target_sources(thingsboard INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ThingsBoard-Arduino-MQTT-SDK/src/ThingsBoard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ThingsBoard-Arduino-MQTT-SDK/src/ThingsBoard.h"
)

target_include_directories(thingsboard INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ThingsBoard-Arduino-MQTT-SDK/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(thingsboard INTERFACE
    arduino-compat
)
