add_library(pac-rclswitch INTERFACE)

target_sources(pac-rclswitch INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RCLSwitch/RCLSwitch.h"
)

target_include_directories(pac-rclswitch INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RCLSwitch"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-rclswitch INTERFACE
    arduino-compat
)
