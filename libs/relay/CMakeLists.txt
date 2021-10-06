add_library(relay INTERFACE)

target_sources(relay INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Relay/src/Relay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Relay/src/Relay.h"
)

target_include_directories(relay INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Relay/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(relay INTERFACE
    arduino-compat
)
