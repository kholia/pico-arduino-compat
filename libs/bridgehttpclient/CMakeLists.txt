add_library(pac-bridgehttpclient INTERFACE)

target_sources(pac-bridgehttpclient INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BridgeHttpClient/BridgeHttpClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BridgeHttpClient/BridgeHttpClient.h"
)

target_include_directories(pac-bridgehttpclient INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BridgeHttpClient"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-bridgehttpclient INTERFACE
    arduino-compat
)
