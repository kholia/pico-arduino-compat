add_library(heartbeat INTERFACE)

target_sources(heartbeat INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HeartBeat/HeartBeat.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HeartBeat/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HeartBeat/HeartBeat.h"
)

target_include_directories(heartbeat INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HeartBeat"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(heartbeat INTERFACE
    arduino-compat
)
