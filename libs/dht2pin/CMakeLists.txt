add_library(pac-dht2pin INTERFACE)

target_sources(pac-dht2pin INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DHT2pin/DHT2pin.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DHT2pin/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DHT2pin/DHT2pin.h"
)

target_include_directories(pac-dht2pin INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DHT2pin"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dht2pin INTERFACE
    arduino-compat
)
