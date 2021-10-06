add_library(iottweet INTERFACE)

target_sources(iottweet INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/IoTtweet/src/IoTtweet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IoTtweet/src/IoTtweet.h"
)

target_include_directories(iottweet INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/IoTtweet/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(iottweet INTERFACE
    arduino-compat
)
