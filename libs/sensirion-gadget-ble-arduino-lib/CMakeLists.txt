add_library(sensirion-gadget-ble-arduino-lib INTERFACE)

target_sources(sensirion-gadget-ble-arduino-lib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-ble-gadget/src/Sensirion_GadgetBle_Lib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-ble-gadget/src/Sensirion_GadgetBle_Lib.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-ble-gadget/examples/Example3_SCD30_BLE_TTGO_Gadget/resources/User_Custom_Fonts.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-ble-gadget/examples/Example3_SCD30_BLE_TTGO_Gadget/resources/fonts/ArchivoNarrow_Regular10pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-ble-gadget/examples/Example3_SCD30_BLE_TTGO_Gadget/resources/fonts/ArchivoNarrow_Regular50pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-ble-gadget/examples/Example3_SCD30_BLE_TTGO_Gadget/resources/fonts/SensirionSimple25pt7b.h"
)

target_include_directories(sensirion-gadget-ble-arduino-lib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-ble-gadget/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sensirion-gadget-ble-arduino-lib INTERFACE
    arduino-compat
)
