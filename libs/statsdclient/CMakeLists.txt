add_library(statsdclient INTERFACE)

target_sources(statsdclient INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-statsdclient/src/statsdclient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-statsdclient/src/chain.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-statsdclient/src/statsdclient.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-statsdclient/src/chain.h"
)

target_include_directories(statsdclient INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-statsdclient/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(statsdclient INTERFACE
    arduino-compat
)
