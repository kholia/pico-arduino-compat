add_library(pac-pubsubclienttools INTERFACE)

target_sources(pac-pubsubclienttools INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoPubSubClientTools/MqttWildcard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoPubSubClientTools/PubSubClientTools.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoPubSubClientTools/PubSubClientTools.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoPubSubClientTools/MqttWildcard.h"
)

target_include_directories(pac-pubsubclienttools INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoPubSubClientTools"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pubsubclienttools INTERFACE
    arduino-compat
)
