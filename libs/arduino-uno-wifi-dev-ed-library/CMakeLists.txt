add_library(pac-arduino-uno-wifi-dev-ed-library INTERFACE)

target_sources(pac-arduino-uno-wifi-dev-ed-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/UnoWiFi-Developer-Edition-Lib/src/UnoWiFiDevEd.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UnoWiFi-Developer-Edition-Lib/src/lib/FP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UnoWiFi-Developer-Edition-Lib/src/lib/mqtt.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UnoWiFi-Developer-Edition-Lib/src/lib/SC16IS750.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UnoWiFi-Developer-Edition-Lib/src/lib/rest.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UnoWiFi-Developer-Edition-Lib/src/lib/espduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UnoWiFi-Developer-Edition-Lib/src/lib/ringbuf.c"
  "${CMAKE_CURRENT_LIST_DIR}/UnoWiFi-Developer-Edition-Lib/src/lib/crc16.c"
  "${CMAKE_CURRENT_LIST_DIR}/UnoWiFi-Developer-Edition-Lib/src/UnoWiFiDevEd.h"
  "${CMAKE_CURRENT_LIST_DIR}/UnoWiFi-Developer-Edition-Lib/src/lib/crc16.h"
  "${CMAKE_CURRENT_LIST_DIR}/UnoWiFi-Developer-Edition-Lib/src/lib/rest.h"
  "${CMAKE_CURRENT_LIST_DIR}/UnoWiFi-Developer-Edition-Lib/src/lib/FP.h"
  "${CMAKE_CURRENT_LIST_DIR}/UnoWiFi-Developer-Edition-Lib/src/lib/mqtt.h"
  "${CMAKE_CURRENT_LIST_DIR}/UnoWiFi-Developer-Edition-Lib/src/lib/espduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/UnoWiFi-Developer-Edition-Lib/src/lib/SC16IS750.h"
  "${CMAKE_CURRENT_LIST_DIR}/UnoWiFi-Developer-Edition-Lib/src/lib/CiaoData.h"
  "${CMAKE_CURRENT_LIST_DIR}/UnoWiFi-Developer-Edition-Lib/src/lib/ringbuf.h"
)

target_include_directories(pac-arduino-uno-wifi-dev-ed-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/UnoWiFi-Developer-Edition-Lib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduino-uno-wifi-dev-ed-library INTERFACE
    arduino-compat
)
