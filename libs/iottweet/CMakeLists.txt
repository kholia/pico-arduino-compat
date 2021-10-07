add_library(pac-iottweet INTERFACE)

target_sources(pac-iottweet INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/IoTtweet/src/IoTtweet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IoTtweet/src/IoTtweet.h"
)

target_include_directories(pac-iottweet INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/IoTtweet/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-iottweet INTERFACE
    arduino-compat
)
