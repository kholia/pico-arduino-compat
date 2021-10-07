add_library(pac-adafruit-untztrument INTERFACE)

target_sources(pac-adafruit-untztrument INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_UNTZtrument/Adafruit_UNTZtrument.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_UNTZtrument/Adafruit_UNTZtrument.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_UNTZtrument/examples/BLE_UNTZtrument_Step_Seq/BluefruitConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_UNTZtrument/examples/BLE_UNTZtrument_Hello_World/BluefruitConfig.h"
)

target_include_directories(pac-adafruit-untztrument INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_UNTZtrument"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adafruit-untztrument INTERFACE
    arduino-compat
)
