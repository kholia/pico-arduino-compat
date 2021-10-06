add_library(multi-channel-relay-arduino-library INTERFACE)

target_sources(multi-channel-relay-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Multi_Channel_Relay_Arduino_Library/multi_channel_relay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Multi_Channel_Relay_Arduino_Library/multi_channel_relay.h"
)

target_include_directories(multi-channel-relay-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Multi_Channel_Relay_Arduino_Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(multi-channel-relay-arduino-library INTERFACE
    arduino-compat
)
