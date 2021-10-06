add_library(simplewificlient INTERFACE)

target_sources(simplewificlient INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SimpleWiFiClient/src/SimpleWiFiClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleWiFiClient/src/SimpleWiFiClient.h"
)

target_include_directories(simplewificlient INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SimpleWiFiClient/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(simplewificlient INTERFACE
    arduino-compat
)
