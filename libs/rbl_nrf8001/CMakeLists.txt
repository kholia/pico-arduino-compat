add_library(rbl_nrf8001 INTERFACE)

target_sources(rbl_nrf8001 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/nRF8001/src/RBL_nRF8001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/nRF8001/examples/BLE_RGB/Adafruit_NeoPixel.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/nRF8001/examples/BLEFirmataSketch/BLEFirmata.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/nRF8001/src/RBL_nRF8001.h"
  "${CMAKE_CURRENT_LIST_DIR}/nRF8001/src/RBL_services.h"
  "${CMAKE_CURRENT_LIST_DIR}/nRF8001/examples/BLE_RGB/Adafruit_NeoPixel.h"
  "${CMAKE_CURRENT_LIST_DIR}/nRF8001/examples/BLEControllerSketch/Boards.h"
  "${CMAKE_CURRENT_LIST_DIR}/nRF8001/examples/BLEFirmataSketch/Boards.h"
  "${CMAKE_CURRENT_LIST_DIR}/nRF8001/examples/BLEFirmataSketch/BLEFirmata.h"
)

target_include_directories(rbl_nrf8001 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/nRF8001/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rbl_nrf8001 INTERFACE
    arduino-compat
)
