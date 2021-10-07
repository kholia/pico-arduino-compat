add_library(pac-fifteenstep INTERFACE)

target_sources(pac-fifteenstep INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FifteenStep/FifteenStep.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FifteenStep/FifteenStep.h"
  "${CMAKE_CURRENT_LIST_DIR}/FifteenStep/examples/neotrellism4/helpers/button.h"
  "${CMAKE_CURRENT_LIST_DIR}/FifteenStep/examples/neotrellism4/helpers/command.h"
  "${CMAKE_CURRENT_LIST_DIR}/FifteenStep/examples/neotrellism4/helpers/display.h"
  "${CMAKE_CURRENT_LIST_DIR}/FifteenStep/examples/neotrellism4/helpers/callback.h"
  "${CMAKE_CURRENT_LIST_DIR}/FifteenStep/examples/neotrellism4/config/trellis.h"
  "${CMAKE_CURRENT_LIST_DIR}/FifteenStep/examples/neotrellism4/config/ui.h"
  "${CMAKE_CURRENT_LIST_DIR}/FifteenStep/examples/ble_neopixel_mpr121/BluefruitConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/FifteenStep/examples/ble_untz/helpers/button.h"
  "${CMAKE_CURRENT_LIST_DIR}/FifteenStep/examples/ble_untz/helpers/command.h"
  "${CMAKE_CURRENT_LIST_DIR}/FifteenStep/examples/ble_untz/helpers/display.h"
  "${CMAKE_CURRENT_LIST_DIR}/FifteenStep/examples/ble_untz/helpers/callback.h"
  "${CMAKE_CURRENT_LIST_DIR}/FifteenStep/examples/ble_untz/config/bluefruit.h"
  "${CMAKE_CURRENT_LIST_DIR}/FifteenStep/examples/ble_untz/config/untz.h"
  "${CMAKE_CURRENT_LIST_DIR}/FifteenStep/examples/ble_untz/config/ui.h"
)

target_include_directories(pac-fifteenstep INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FifteenStep"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-fifteenstep INTERFACE
    arduino-compat
)
