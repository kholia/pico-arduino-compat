add_library(pac-heartbeat INTERFACE)

target_sources(pac-heartbeat INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HeartBeat/HeartBeat.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HeartBeat/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HeartBeat/HeartBeat.h"
)

target_include_directories(pac-heartbeat INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HeartBeat"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-heartbeat INTERFACE
    arduino-compat
)
