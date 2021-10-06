add_library(ipgeolocation INTERFACE)

target_sources(ipgeolocation INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/IPGeolocation/src/IPGeolocation.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IPGeolocation/examples/SerialExample/SerialExample.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IPGeolocation/src/IPGeolocation.h"
)

target_include_directories(ipgeolocation INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/IPGeolocation/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ipgeolocation INTERFACE
    arduino-compat
)
