add_library(pac-wifiesp INTERFACE)

target_sources(pac-wifiesp INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WiFiEsp/src/WiFiEspUdp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiEsp/src/WiFiEspServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiEsp/src/WiFiEspClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiEsp/src/WiFiEsp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiEsp/src/utility/RingBuffer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiEsp/src/utility/EspDrv.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiEsp/src/WiFiEspUdp.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiEsp/src/WiFiEspServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiEsp/src/WiFiEspClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiEsp/src/WiFiEsp.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiEsp/src/utility/EspDrv.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiEsp/src/utility/RingBuffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiEsp/src/utility/debug.h"
)

target_include_directories(pac-wifiesp INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WiFiEsp/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-wifiesp INTERFACE
    arduino-compat
)
