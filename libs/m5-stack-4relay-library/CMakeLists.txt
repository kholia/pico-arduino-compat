add_library(m5-stack-4relay-library INTERFACE)

target_sources(m5-stack-4relay-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/M5STACK_4RELAY/src/M5_4Relay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5STACK_4RELAY/src/M5_4Relay.h"
)

target_include_directories(m5-stack-4relay-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/M5STACK_4RELAY/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(m5-stack-4relay-library INTERFACE
    arduino-compat
)
