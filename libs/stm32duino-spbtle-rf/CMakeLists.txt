add_library(pac-stm32duino-spbtle-rf INTERFACE)

target_sources(pac-stm32duino-spbtle-rf INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SPBTLE-RF/src/sensor_service.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SPBTLE-RF/src/beacon_service.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SPBTLE-RF/src/SPBTLE_RF.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SPBTLE-RF/src/eddystone_beacon.c"
  "${CMAKE_CURRENT_LIST_DIR}/SPBTLE-RF/src/bluenrg_interface.c"
  "${CMAKE_CURRENT_LIST_DIR}/SPBTLE-RF/src/STM32_BlueNRG/SimpleBlueNRG_HCI/utils/ble_list.c"
  "${CMAKE_CURRENT_LIST_DIR}/SPBTLE-RF/src/STM32_BlueNRG/SimpleBlueNRG_HCI/utils/osal.c"
  "${CMAKE_CURRENT_LIST_DIR}/SPBTLE-RF/src/STM32_BlueNRG/SimpleBlueNRG_HCI/utils/gp_timer.c"
  "${CMAKE_CURRENT_LIST_DIR}/SPBTLE-RF/src/STM32_BlueNRG/SimpleBlueNRG_HCI/hci/hci.c"
  "${CMAKE_CURRENT_LIST_DIR}/SPBTLE-RF/src/STM32_BlueNRG/SimpleBlueNRG_HCI/hci/hci_le.c"
  "${CMAKE_CURRENT_LIST_DIR}/SPBTLE-RF/src/STM32_BlueNRG/SimpleBlueNRG_HCI/hci/controller/bluenrg_hal_aci.c"
  "${CMAKE_CURRENT_LIST_DIR}/SPBTLE-RF/src/STM32_BlueNRG/SimpleBlueNRG_HCI/hci/controller/bluenrg_utils.c"
  "${CMAKE_CURRENT_LIST_DIR}/SPBTLE-RF/src/STM32_BlueNRG/SimpleBlueNRG_HCI/hci/controller/bluenrg_l2cap_aci.c"
  "${CMAKE_CURRENT_LIST_DIR}/SPBTLE-RF/src/STM32_BlueNRG/SimpleBlueNRG_HCI/hci/controller/bluenrg_updater_aci.c"
  "${CMAKE_CURRENT_LIST_DIR}/SPBTLE-RF/src/STM32_BlueNRG/SimpleBlueNRG_HCI/hci/controller/bluenrg_gap_aci.c"
  "${CMAKE_CURRENT_LIST_DIR}/SPBTLE-RF/src/STM32_BlueNRG/SimpleBlueNRG_HCI/hci/controller/bluenrg_IFR.c"
  "${CMAKE_CURRENT_LIST_DIR}/SPBTLE-RF/src/STM32_BlueNRG/SimpleBlueNRG_HCI/hci/controller/bluenrg_gatt_aci.c"
  "${CMAKE_CURRENT_LIST_DIR}/SPBTLE-RF/src/connection_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/SPBTLE-RF/src/bluenrg_hal_aci.h"
  "${CMAKE_CURRENT_LIST_DIR}/SPBTLE-RF/src/SPBTLE_RF.h"
  "${CMAKE_CURRENT_LIST_DIR}/SPBTLE-RF/src/bluenrg_utils.h"
  "${CMAKE_CURRENT_LIST_DIR}/SPBTLE-RF/src/bluenrg_interface.h"
  "${CMAKE_CURRENT_LIST_DIR}/SPBTLE-RF/src/bluenrg_gap_aci.h"
  "${CMAKE_CURRENT_LIST_DIR}/SPBTLE-RF/src/bluenrg_aci_const.h"
  "${CMAKE_CURRENT_LIST_DIR}/SPBTLE-RF/src/ble_status.h"
  "${CMAKE_CURRENT_LIST_DIR}/SPBTLE-RF/src/stm32_bluenrg_ble.h"
  "${CMAKE_CURRENT_LIST_DIR}/SPBTLE-RF/src/hal.h"
  "${CMAKE_CURRENT_LIST_DIR}/SPBTLE-RF/src/eddystone_beacon.h"
  "${CMAKE_CURRENT_LIST_DIR}/SPBTLE-RF/src/hal_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/SPBTLE-RF/src/sm.h"
  "${CMAKE_CURRENT_LIST_DIR}/SPBTLE-RF/src/bluenrg_updater_aci.h"
  "${CMAKE_CURRENT_LIST_DIR}/SPBTLE-RF/src/bluenrg_gatt_aci.h"
  "${CMAKE_CURRENT_LIST_DIR}/SPBTLE-RF/src/ble_list.h"
  "${CMAKE_CURRENT_LIST_DIR}/SPBTLE-RF/src/link_layer.h"
  "${CMAKE_CURRENT_LIST_DIR}/SPBTLE-RF/src/beacon_service.h"
  "${CMAKE_CURRENT_LIST_DIR}/SPBTLE-RF/src/hci_const.h"
  "${CMAKE_CURRENT_LIST_DIR}/SPBTLE-RF/src/hci.h"
  "${CMAKE_CURRENT_LIST_DIR}/SPBTLE-RF/src/compiler.h"
  "${CMAKE_CURRENT_LIST_DIR}/SPBTLE-RF/src/hci_le.h"
  "${CMAKE_CURRENT_LIST_DIR}/SPBTLE-RF/src/bluenrg_aci.h"
  "${CMAKE_CURRENT_LIST_DIR}/SPBTLE-RF/src/osal.h"
  "${CMAKE_CURRENT_LIST_DIR}/SPBTLE-RF/src/bluenrg_gatt_server.h"
  "${CMAKE_CURRENT_LIST_DIR}/SPBTLE-RF/src/bluenrg_gap.h"
  "${CMAKE_CURRENT_LIST_DIR}/SPBTLE-RF/src/debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/SPBTLE-RF/src/bluenrg_l2cap_aci.h"
  "${CMAKE_CURRENT_LIST_DIR}/SPBTLE-RF/src/gp_timer.h"
  "${CMAKE_CURRENT_LIST_DIR}/SPBTLE-RF/src/sensor_service.h"
  "${CMAKE_CURRENT_LIST_DIR}/SPBTLE-RF/src/ble_clock.h"
)

target_include_directories(pac-stm32duino-spbtle-rf INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SPBTLE-RF/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-stm32duino-spbtle-rf INTERFACE
    arduino-compat
)
