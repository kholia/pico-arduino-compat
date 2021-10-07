add_library(pac-dht-sensor-library INTERFACE)

target_sources(pac-dht-sensor-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DHT-sensor-library/DHT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DHT-sensor-library/DHT_U.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DHT-sensor-library/DHT_U.h"
  "${CMAKE_CURRENT_LIST_DIR}/DHT-sensor-library/DHT.h"
)

target_include_directories(pac-dht-sensor-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DHT-sensor-library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dht-sensor-library INTERFACE
    arduino-compat
)
