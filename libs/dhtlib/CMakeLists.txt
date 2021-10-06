add_library(dhtlib INTERFACE)

target_sources(dhtlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DHTlib/dht.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DHTlib/dht.h"
)

target_include_directories(dhtlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DHTlib"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(dhtlib INTERFACE
    arduino-compat
)
