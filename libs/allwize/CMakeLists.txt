add_library(allwize INTERFACE)

target_sources(allwize INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/allwize/src/AllWize_LoRaWAN.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/allwize/src/AllWize.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/allwize/examples/lorawan/lorawan_gateway/src/forwarder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/allwize/examples/lorawan/lorawan_gateway/src/wize.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/allwize/examples/lorawan/lorawan_gateway/src/debug.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/allwize/examples/lorawan/lorawan_gateway/src/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/allwize/examples/lorawan/lorawan_gateway/src/wifi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/allwize/examples/lorawan/lorawan_gateway/src/ntp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/allwize/src/AllWize.h"
  "${CMAKE_CURRENT_LIST_DIR}/allwize/src/RC1701HP.h"
  "${CMAKE_CURRENT_LIST_DIR}/allwize/src/AllWize_LoRaWAN.h"
  "${CMAKE_CURRENT_LIST_DIR}/allwize/src/OMS.h"
  "${CMAKE_CURRENT_LIST_DIR}/allwize/examples/lorawan/lorawan_gateway/src/wifi.h"
  "${CMAKE_CURRENT_LIST_DIR}/allwize/examples/lorawan/lorawan_gateway/src/configuration.sample.h"
  "${CMAKE_CURRENT_LIST_DIR}/allwize/examples/lorawan/lorawan_gateway/src/ntp.h"
  "${CMAKE_CURRENT_LIST_DIR}/allwize/examples/lorawan/lorawan_gateway/src/debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/allwize/examples/lorawan/lorawan_gateway/src/wize.h"
  "${CMAKE_CURRENT_LIST_DIR}/allwize/examples/lorawan/lorawan_gateway/src/forwarder.h"
  "${CMAKE_CURRENT_LIST_DIR}/allwize/examples/wize2thethingsio/configuration.sample.h"
  "${CMAKE_CURRENT_LIST_DIR}/allwize/examples/wize2mqtt/configuration.sample.h"
  "${CMAKE_CURRENT_LIST_DIR}/allwize/tests/MockupTest/RC1701XX_Mockup.h"
)

target_include_directories(allwize INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/allwize/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(allwize INTERFACE
    arduino-compat
)
