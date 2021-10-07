add_library(pac-ws2812fx INTERFACE)

target_sources(pac-ws2812fx INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WS2812FX/src/WS2812FX.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WS2812FX/examples/esp8266_webinterface/index.html.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WS2812FX/examples/esp8266_webinterface/main.js.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WS2812FX/src/WS2812FX.h"
  "${CMAKE_CURRENT_LIST_DIR}/WS2812FX/src/custom/ICU.h"
  "${CMAKE_CURRENT_LIST_DIR}/WS2812FX/src/custom/VUMeter.h"
  "${CMAKE_CURRENT_LIST_DIR}/WS2812FX/src/custom/Fillerup.h"
  "${CMAKE_CURRENT_LIST_DIR}/WS2812FX/src/custom/RainbowFireworks.h"
  "${CMAKE_CURRENT_LIST_DIR}/WS2812FX/src/custom/Heartbeat.h"
  "${CMAKE_CURRENT_LIST_DIR}/WS2812FX/src/custom/DualLarson.h"
  "${CMAKE_CURRENT_LIST_DIR}/WS2812FX/src/custom/Rain.h"
  "${CMAKE_CURRENT_LIST_DIR}/WS2812FX/src/custom/TriFade.h"
  "${CMAKE_CURRENT_LIST_DIR}/WS2812FX/src/custom/RainbowLarson.h"
  "${CMAKE_CURRENT_LIST_DIR}/WS2812FX/src/custom/Bits.h"
  "${CMAKE_CURRENT_LIST_DIR}/WS2812FX/src/custom/BlockDissolve.h"
  "${CMAKE_CURRENT_LIST_DIR}/WS2812FX/src/custom/Oscillate.h"
  "${CMAKE_CURRENT_LIST_DIR}/WS2812FX/src/custom/Matrix.h"
  "${CMAKE_CURRENT_LIST_DIR}/WS2812FX/src/custom/RandomChase.h"
  "${CMAKE_CURRENT_LIST_DIR}/WS2812FX/src/custom/Popcorn.h"
  "${CMAKE_CURRENT_LIST_DIR}/WS2812FX/src/custom/MultiComet.h"
  "${CMAKE_CURRENT_LIST_DIR}/WS2812FX/src/custom/TwinkleFox.h"
  "${CMAKE_CURRENT_LIST_DIR}/WS2812FX/examples/ws2812fx_segments_web/app.css.h"
  "${CMAKE_CURRENT_LIST_DIR}/WS2812FX/examples/ws2812fx_segments_web/bundle.js.h"
  "${CMAKE_CURRENT_LIST_DIR}/WS2812FX/examples/ws2812fx_segments_web/app.js.h"
  "${CMAKE_CURRENT_LIST_DIR}/WS2812FX/examples/ws2812fx_segments_web/material_icons_subset.woff2.h"
  "${CMAKE_CURRENT_LIST_DIR}/WS2812FX/examples/ws2812fx_segments_web/bundle.css.h"
  "${CMAKE_CURRENT_LIST_DIR}/WS2812FX/examples/ws2812fx_segments_web/index.html.h"
  "${CMAKE_CURRENT_LIST_DIR}/WS2812FX/examples/ws2812fx_esp32/ESP32_RMT_Driver.h"
)

target_include_directories(pac-ws2812fx INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WS2812FX/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ws2812fx INTERFACE
    arduino-compat
)
