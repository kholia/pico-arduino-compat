add_library(pac-statsdclient INTERFACE)

target_sources(pac-statsdclient INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-statsdclient/src/statsdclient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-statsdclient/src/chain.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-statsdclient/src/statsdclient.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-statsdclient/src/chain.h"
)

target_include_directories(pac-statsdclient INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-statsdclient/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-statsdclient INTERFACE
    arduino-compat
)
