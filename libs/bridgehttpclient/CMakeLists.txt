add_library(bridgehttpclient INTERFACE)

target_sources(bridgehttpclient INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BridgeHttpClient/BridgeHttpClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BridgeHttpClient/BridgeHttpClient.h"
)

target_include_directories(bridgehttpclient INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BridgeHttpClient"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(bridgehttpclient INTERFACE
    arduino-compat
)
