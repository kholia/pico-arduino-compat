add_library(fabo-301-ble-siliconlabs INTERFACE)

target_sources(fabo-301-ble-siliconlabs INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FaBoBLE-BLE113-Library/src/fabo-ble113.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FaBoBLE-BLE113-Library/src/fabo-ble113.h"
)

target_include_directories(fabo-301-ble-siliconlabs INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FaBoBLE-BLE113-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(fabo-301-ble-siliconlabs INTERFACE
    arduino-compat
)
