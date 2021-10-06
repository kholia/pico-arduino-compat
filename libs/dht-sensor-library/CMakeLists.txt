add_library(dht-sensor-library INTERFACE)

target_sources(dht-sensor-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DHT-sensor-library/DHT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DHT-sensor-library/DHT_U.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DHT-sensor-library/DHT_U.h"
  "${CMAKE_CURRENT_LIST_DIR}/DHT-sensor-library/DHT.h"
)

target_include_directories(dht-sensor-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DHT-sensor-library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(dht-sensor-library INTERFACE
    arduino-compat
)
