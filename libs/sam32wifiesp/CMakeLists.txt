add_library(sam32wifiesp INTERFACE)

target_sources(sam32wifiesp INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/sam32wifiesp/src/WiFiEspUdp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/sam32wifiesp/src/WiFiEspServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/sam32wifiesp/src/WiFiEspClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/sam32wifiesp/src/SAM32WiFiEsp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/sam32wifiesp/src/utility/EspDrv.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/sam32wifiesp/src/utility/WiFiEspRingBuffer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/sam32wifiesp/src/WiFiEspUdp.h"
  "${CMAKE_CURRENT_LIST_DIR}/sam32wifiesp/src/WiFiEspServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/sam32wifiesp/src/WiFiEspClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/sam32wifiesp/src/SAM32WiFiEsp.h"
  "${CMAKE_CURRENT_LIST_DIR}/sam32wifiesp/src/utility/EspDrv.h"
  "${CMAKE_CURRENT_LIST_DIR}/sam32wifiesp/src/utility/WiFiEspRingBuffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/sam32wifiesp/src/utility/debug.h"
)

target_include_directories(sam32wifiesp INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/sam32wifiesp/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sam32wifiesp INTERFACE
    arduino-compat
)
