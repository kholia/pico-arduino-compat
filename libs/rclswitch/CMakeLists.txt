add_library(rclswitch INTERFACE)

target_sources(rclswitch INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RCLSwitch/RCLSwitch.h"
)

target_include_directories(rclswitch INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RCLSwitch"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rclswitch INTERFACE
    arduino-compat
)
