add_library(pac-ipgeolocation INTERFACE)

target_sources(pac-ipgeolocation INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/IPGeolocation/src/IPGeolocation.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IPGeolocation/examples/SerialExample/SerialExample.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IPGeolocation/src/IPGeolocation.h"
)

target_include_directories(pac-ipgeolocation INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/IPGeolocation/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ipgeolocation INTERFACE
    arduino-compat
)
