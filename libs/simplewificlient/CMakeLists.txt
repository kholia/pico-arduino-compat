add_library(pac-simplewificlient INTERFACE)

target_sources(pac-simplewificlient INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SimpleWiFiClient/src/SimpleWiFiClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleWiFiClient/src/SimpleWiFiClient.h"
)

target_include_directories(pac-simplewificlient INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SimpleWiFiClient/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-simplewificlient INTERFACE
    arduino-compat
)
