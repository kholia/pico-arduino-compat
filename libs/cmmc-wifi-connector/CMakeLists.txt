add_library(cmmc-wifi-connector INTERFACE)

target_sources(cmmc-wifi-connector INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WiFiConnector/src/WiFiConnector.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiConnector/src/WiFiConnector.h"
)

target_include_directories(cmmc-wifi-connector INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WiFiConnector/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(cmmc-wifi-connector INTERFACE
    arduino-compat
)
