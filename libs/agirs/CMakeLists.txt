add_library(pac-agirs INTERFACE)

target_sources(pac-agirs INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AGirs/src/GirsLib/GirsUtils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AGirs/src/GirsLib/LedLcdManager.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AGirs/src/GirsLib/LiquidCrystal_I2C_bm.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AGirs/src/GirsLib/StreamParser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AGirs/examples/Translator/Translator.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AGirs/examples/Opponator/Opponator.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AGirs/examples/Listener/Listener.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AGirs/examples/Girs/Girs.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AGirs/src/girs_hw_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/AGirs/src/GirsLib/defineMissingStuff.h"
  "${CMAKE_CURRENT_LIST_DIR}/AGirs/src/GirsLib/GirsUtils.h"
  "${CMAKE_CURRENT_LIST_DIR}/AGirs/src/GirsLib/StreamParser.h"
  "${CMAKE_CURRENT_LIST_DIR}/AGirs/src/GirsLib/version.h"
  "${CMAKE_CURRENT_LIST_DIR}/AGirs/src/GirsLib/LiquidCrystal_I2C_bm.h"
  "${CMAKE_CURRENT_LIST_DIR}/AGirs/src/GirsLib/IrNamedRemoteSet.h"
  "${CMAKE_CURRENT_LIST_DIR}/AGirs/src/GirsLib/LedLcdManager.h"
  "${CMAKE_CURRENT_LIST_DIR}/AGirs/src/hardware-config/girs_pins_nano_shield.h"
  "${CMAKE_CURRENT_LIST_DIR}/AGirs/src/hardware-config/girs_pins_micro.h"
  "${CMAKE_CURRENT_LIST_DIR}/AGirs/src/hardware-config/girs_pins_default.h"
  "${CMAKE_CURRENT_LIST_DIR}/AGirs/src/hardware-config/girs_pins_leonardo.h"
  "${CMAKE_CURRENT_LIST_DIR}/AGirs/src/hardware-config/lcd_0x3F_20_4.h"
  "${CMAKE_CURRENT_LIST_DIR}/AGirs/src/hardware-config/girs_pins_mega2560.h"
  "${CMAKE_CURRENT_LIST_DIR}/AGirs/src/hardware-config/girs_pins.h"
  "${CMAKE_CURRENT_LIST_DIR}/AGirs/src/hardware-config/lcd_0x27_20_4.h"
  "${CMAKE_CURRENT_LIST_DIR}/AGirs/src/hardware-config/girs_pins_mega2560_rear.h"
  "${CMAKE_CURRENT_LIST_DIR}/AGirs/src/hardware-config/girs_pins_combi_shield.h"
  "${CMAKE_CURRENT_LIST_DIR}/AGirs/src/hardware-config/girs_pins_nano.h"
  "${CMAKE_CURRENT_LIST_DIR}/AGirs/src/hardware-config/lcd_0x27_16_2.h"
  "${CMAKE_CURRENT_LIST_DIR}/AGirs/examples/Translator/config.h"
  "${CMAKE_CURRENT_LIST_DIR}/AGirs/examples/Opponator/config.h"
  "${CMAKE_CURRENT_LIST_DIR}/AGirs/examples/Listener/config.h"
  "${CMAKE_CURRENT_LIST_DIR}/AGirs/examples/Girs/GirsFat.config.h"
  "${CMAKE_CURRENT_LIST_DIR}/AGirs/examples/Girs/config.h"
  "${CMAKE_CURRENT_LIST_DIR}/AGirs/examples/Girs/GirsLite.config.h"
)

target_include_directories(pac-agirs INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AGirs/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-agirs INTERFACE
    arduino-compat
)
