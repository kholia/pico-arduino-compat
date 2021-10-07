add_library(pac-dht12 INTERFACE)

target_sources(pac-dht12 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DHT12/DHT12.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DHT12/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DHT12/DHT12.h"
)

target_include_directories(pac-dht12 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DHT12"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dht12 INTERFACE
    arduino-compat
)
