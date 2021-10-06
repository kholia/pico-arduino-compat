add_library(zentser-esp-sdk INTERFACE)

target_sources(zentser-esp-sdk INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/esp-zentser-sdk/examples/000-Template/src/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp-zentser-sdk/examples/001-DHT-Temperature-Humidity/src/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp-zentser-sdk/src/AWSConfig.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp-zentser-sdk/src/ZentserSensor.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp-zentser-sdk/src/Zentser_ESP_SDK.h"
)

target_include_directories(zentser-esp-sdk INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/esp-zentser-sdk/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(zentser-esp-sdk INTERFACE
    arduino-compat
)
