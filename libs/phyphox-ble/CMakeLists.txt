add_library(phyphox-ble INTERFACE)

target_sources(phyphox-ble INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/phyphox-arduino/src/view.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/phyphox-arduino/src/phyphoxBLE_NanoIOT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/phyphox-arduino/src/element.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/phyphox-arduino/src/phyphoxBLE_ESP32.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/phyphox-arduino/src/experiment.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/phyphox-arduino/src/phyphoxBLE_NRF52.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/phyphox-arduino/src/graph.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/phyphox-arduino/src/phyphoxBLE_NRF52.h"
  "${CMAKE_CURRENT_LIST_DIR}/phyphox-arduino/src/phyphoxBLE_ESP32.h"
  "${CMAKE_CURRENT_LIST_DIR}/phyphox-arduino/src/phyphoxBLE_NanoIOT.h"
  "${CMAKE_CURRENT_LIST_DIR}/phyphox-arduino/src/phyphoxBle.h"
  "${CMAKE_CURRENT_LIST_DIR}/phyphox-arduino/src/phyphoxBleExperiment.h"
)

target_include_directories(phyphox-ble INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/phyphox-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(phyphox-ble INTERFACE
    arduino-compat
)
