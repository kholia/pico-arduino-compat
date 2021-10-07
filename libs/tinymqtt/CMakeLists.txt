add_library(pac-tinymqtt INTERFACE)

target_sources(pac-tinymqtt INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TinyMqtt/src/TinyMqtt.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyMqtt/src/StringIndexer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyMqtt/src/TinyMqtt.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyMqtt/src/my_credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyMqtt/src/MqttStreaming.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyMqtt/src/StringIndexer.h"
)

target_include_directories(pac-tinymqtt INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TinyMqtt/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tinymqtt INTERFACE
    arduino-compat
)
