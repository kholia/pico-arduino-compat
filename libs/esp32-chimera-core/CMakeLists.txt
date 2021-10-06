add_library(esp32-chimera-core INTERFACE)

target_sources(esp32-chimera-core INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/ESP32-Chimera-Core.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/M5Display.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/helpers/TouchButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/helpers/quaternionFilters.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/helpers/M5Timer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/helpers/ScreenShotService/ScreenShot.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/helpers/ScreenShotService/PNG/FatPNGEncoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/helpers/ScreenShotService/GIF/TinyGIFEncoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/helpers/ScreenShotService/JPG/TinyJPEGEncoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/helpers/ScreenShotService/BMP/TinyBMPEncoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/drivers/Odroid-Go/Battery/battery.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/drivers/M5Stack/M5LoRa.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/drivers/M5Stack/M5Faces.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/drivers/M5Stack/MPU9250/MPU9250.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/drivers/M5StickC/AXP192.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/drivers/M5StickC/RTC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/drivers/common/Touch_XPT2046/XPT2046.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/drivers/common/DummyTouch/DummyTouch.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/drivers/common/NVS/NVSUtils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/drivers/common/LoRaWan/LoRaWan.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/drivers/common/Speaker/Speaker.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/drivers/common/IP5306/Power.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/drivers/common/Touch_FT5206/FT5206.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/drivers/common/I2C/I2CUtil.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/drivers/common/Button/Button.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/drivers/M5Core2/AXP192/AXP192_M5Core2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/drivers/M5Core2/FT6336U/Touch_M5Core2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/drivers/M5Core2/MPU6886/MahonyAHRS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/drivers/M5Core2/MPU6886/MPU6886_M5Core2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/drivers/M5Core2/BM8563/RTC_M5Core2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/drivers/TWatch/axp/axp20x.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/drivers/TWatch/rtc/pcf8563.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/gitTagVersion.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/ESP32-Chimera-Core.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/Config.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/Free_Fonts.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/ESP32-Chimera-Core-Config.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/M5Display.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/helpers/M5Timer.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/helpers/quaternionFilters.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/helpers/TouchButton.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/helpers/Memory.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/helpers/ScreenShotService/ScreenShot.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/helpers/ScreenShotService/PNG/FatPNGEncoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/helpers/ScreenShotService/GIF/TinyGIFEncoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/helpers/ScreenShotService/JPG/TinyJPEGEncoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/helpers/ScreenShotService/BMP/TinyBMPEncoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/drivers/Odroid-Go/Battery/battery.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/drivers/M5Stack/M5LoRa.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/drivers/M5Stack/M5Faces.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/drivers/M5Stack/MPU9250/MPU9250.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/drivers/M5StickC/RTC.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/drivers/M5StickC/AXP192.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/drivers/common/Touch_XPT2046/XPT2046.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/drivers/common/DummyTouch/DummyTouch.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/drivers/common/NVS/NVSUtils.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/drivers/common/LoRaWan/LoRaWan.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/drivers/common/Speaker/Speaker.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/drivers/common/IP5306/Power.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/drivers/common/Touch_FT5206/FT5206.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/drivers/common/I2C/I2CUtil.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/drivers/common/Button/Button.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/drivers/M5Core2/AXP192/AXP192_M5Core2.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/drivers/M5Core2/FT6336U/Touch_M5Core2.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/drivers/M5Core2/MPU6886/MPU6886_M5Core2.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/drivers/M5Core2/MPU6886/MahonyAHRS.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/drivers/M5Core2/BM8563/RTC_M5Core2.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/drivers/TWatch/axp/axp20x.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src/drivers/TWatch/rtc/pcf8563.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/boards/variants/backup/m5stick_c/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/boards/variants/backup/m5stack_fire/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/boards/variants/backup/odroid_esp32/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/boards/variants/backup/ttgo-t1/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/boards/variants/backup/m5stack_core_esp32/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/boards/variants/backup/m5stack_core2/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/boards/variants/backup/d32_pro/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/boards/variants/backup/twatch/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/boards/variants/backup/lolin32/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/boards/variants/d-duino-32-xs/pins_arduino.h"
)

target_include_directories(esp32-chimera-core INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP32-Chimera-Core/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET official-sd)
    add_subdirectory(../../official-libs/sd build_official-sd)
endif()

target_link_libraries(esp32-chimera-core INTERFACE
    arduino-compat
    official-sd
)
