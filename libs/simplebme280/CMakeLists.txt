add_library(pac-simplebme280 INTERFACE)

target_sources(pac-simplebme280 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SimpleBME280/src/SimpleBME280.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleBME280/src/SimpleBME280.h"
)

target_include_directories(pac-simplebme280 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SimpleBME280/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-simplebme280 INTERFACE
    arduino-compat
)
