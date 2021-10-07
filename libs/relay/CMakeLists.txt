add_library(pac-relay INTERFACE)

target_sources(pac-relay INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Relay/src/Relay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Relay/src/Relay.h"
)

target_include_directories(pac-relay INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Relay/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-relay INTERFACE
    arduino-compat
)
