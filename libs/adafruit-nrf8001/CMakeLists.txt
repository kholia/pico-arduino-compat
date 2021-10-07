add_library(pac-adafruit-nrf8001 INTERFACE)

target_sources(pac-adafruit-nrf8001 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_nRF8001/Adafruit_BLE_UART.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_nRF8001/examples/nrf8001_controller/packetParser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_nRF8001/utility/acilib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_nRF8001/utility/aci_setup.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_nRF8001/utility/lib_aci.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_nRF8001/utility/hal_aci_tl.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_nRF8001/Adafruit_BLE_UART.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_nRF8001/utility/ble_system.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_nRF8001/utility/aci_evts.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_nRF8001/utility/acilib_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_nRF8001/utility/aci_protocol_defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_nRF8001/utility/acilib.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_nRF8001/utility/dtm.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_nRF8001/utility/hal_platform.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_nRF8001/utility/aci_cmds.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_nRF8001/utility/aci_setup.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_nRF8001/utility/lib_aci.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_nRF8001/utility/acilib_if.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_nRF8001/utility/aci.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_nRF8001/utility/acilib_defs.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_nRF8001/utility/uart/services.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_nRF8001/utility/hal/hal_io.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_nRF8001/utility/hal/hal_aci_tl.h"
)

target_include_directories(pac-adafruit-nrf8001 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_nRF8001"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adafruit-nrf8001 INTERFACE
    arduino-compat
)
