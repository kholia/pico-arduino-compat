add_library(dht12 INTERFACE)

target_sources(dht12 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DHT12/DHT12.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DHT12/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DHT12/DHT12.h"
)

target_include_directories(dht12 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DHT12"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(dht12 INTERFACE
    arduino-compat
)
