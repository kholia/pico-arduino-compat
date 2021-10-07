add_library(pac-dfrobot_dht20 INTERFACE)

target_sources(pac-dfrobot_dht20 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DFRobot_DHT20/DFRobot_DHT20.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DFRobot_DHT20/DFRobot_DHT20.h"
)

target_include_directories(pac-dfrobot_dht20 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DFRobot_DHT20"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dfrobot_dht20 INTERFACE
    arduino-compat
)
