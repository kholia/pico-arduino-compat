add_library(pac-dht-sensor-library-for-espx INTERFACE)

target_sources(pac-dht-sensor-library-for-espx INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DHTesp/DHTesp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DHTesp/DHTesp.h"
)

target_include_directories(pac-dht-sensor-library-for-espx INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DHTesp"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dht-sensor-library-for-espx INTERFACE
    arduino-compat
)
