add_library(grove-lora-radio-433mhz-868mhz INTERFACE)

target_sources(grove-lora-radio-433mhz-868mhz INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Grove_LoRa_433MHz_and_915MHz_RF/RHReliableDatagram.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_LoRa_433MHz_and_915MHz_RF/RHMesh.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_LoRa_433MHz_and_915MHz_RF/RHUartDriver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_LoRa_433MHz_and_915MHz_RF/RHGenericDriver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_LoRa_433MHz_and_915MHz_RF/RHRouter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_LoRa_433MHz_and_915MHz_RF/RHDatagram.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_LoRa_433MHz_and_915MHz_RF/RH_RF95.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_LoRa_433MHz_and_915MHz_RF/RHMesh.h"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_LoRa_433MHz_and_915MHz_RF/RadioHead.h"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_LoRa_433MHz_and_915MHz_RF/RH_RF95.h"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_LoRa_433MHz_and_915MHz_RF/RHGenericDriver.h"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_LoRa_433MHz_and_915MHz_RF/RHRouter.h"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_LoRa_433MHz_and_915MHz_RF/RHUartDriver.h"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_LoRa_433MHz_and_915MHz_RF/RHReliableDatagram.h"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_LoRa_433MHz_and_915MHz_RF/RHDatagram.h"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_LoRa_433MHz_and_915MHz_RF/RHutil/simulator.h"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_LoRa_433MHz_and_915MHz_RF/RHutil/atomic.h"
)

target_include_directories(grove-lora-radio-433mhz-868mhz INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Grove_LoRa_433MHz_and_915MHz_RF"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(grove-lora-radio-433mhz-868mhz INTERFACE
    arduino-compat
)
