add_library(pac-hamqttdevice INTERFACE)

target_sources(pac-hamqttdevice INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HAMqttDevice/src/HAMqttDevice.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HAMqttDevice/src/HAMqttDevice.h"
)

target_include_directories(pac-hamqttdevice INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HAMqttDevice/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-hamqttdevice INTERFACE
    arduino-compat
)
