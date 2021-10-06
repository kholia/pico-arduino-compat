add_library(dht-sensor-library-for-espx INTERFACE)

target_sources(dht-sensor-library-for-espx INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DHTesp/DHTesp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DHTesp/DHTesp.h"
)

target_include_directories(dht-sensor-library-for-espx INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DHTesp"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(dht-sensor-library-for-espx INTERFACE
    arduino-compat
)
