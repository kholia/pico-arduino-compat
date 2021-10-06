add_library(simplebme280 INTERFACE)

target_sources(simplebme280 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SimpleBME280/src/SimpleBME280.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleBME280/src/SimpleBME280.h"
)

target_include_directories(simplebme280 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SimpleBME280/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(simplebme280 INTERFACE
    arduino-compat
)
