add_library(pac-cerp-df-robot-wireless-gamepad-v2.0-for-arduino-library INTERFACE)

target_sources(pac-cerp-df-robot-wireless-gamepad-v2.0-for-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CERP_DF_Robot_Wireless_GamePad_V2/src/GamePadCtrl.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CERP_DF_Robot_Wireless_GamePad_V2/src/GamePadMsg.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CERP_DF_Robot_Wireless_GamePad_V2/src/GamePadCtrlRx.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CERP_DF_Robot_Wireless_GamePad_V2/src/GamePadPins.h"
  "${CMAKE_CURRENT_LIST_DIR}/CERP_DF_Robot_Wireless_GamePad_V2/src/CerpGamePad.h"
  "${CMAKE_CURRENT_LIST_DIR}/CERP_DF_Robot_Wireless_GamePad_V2/src/GamePadCtrl.h"
  "${CMAKE_CURRENT_LIST_DIR}/CERP_DF_Robot_Wireless_GamePad_V2/src/GamePadCtrlRx.h"
  "${CMAKE_CURRENT_LIST_DIR}/CERP_DF_Robot_Wireless_GamePad_V2/src/GamePadMsg.h"
)

target_include_directories(pac-cerp-df-robot-wireless-gamepad-v2.0-for-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CERP_DF_Robot_Wireless_GamePad_V2/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-cerp-df-robot-wireless-gamepad-v2.0-for-arduino-library INTERFACE
    arduino-compat
)
