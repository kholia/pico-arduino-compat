add_library(pac-m5core2 INTERFACE)

target_sources(pac-m5core2 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/M5Core2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/M5Touch.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/AXP192.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/RTC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/M5Display.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/utility/M5Button.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/utility/Sprite.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/utility/CommUtil.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/utility/MahonyAHRS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/utility/MPU6886.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/utility/In_eSPI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/utility/PointAndZone.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/utility/quaternionFilters.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/utility/M5Timer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Touch/TouchGoal/Goals.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Module/SERVO2_PCA9685/Adafruit_PWMServoDriver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Module/PM2.5_PMSA003/DFRobot_SHT20.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Module/COMX_GSM/TFTTerminal.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Module/COMX_LTE-DATA/TFTTerminal.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Module/LORA868_SX1276/LoRa868Duplex/M5LoRa.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Module/AC-SOCKET/protocol.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Module/COMX_LTE/TFTTerminal.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Module/COMX_NB-IoT/TFTTerminal.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/core2_for_aws/FactoryTest/line3D.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/core2_for_aws/FactoryTest/fft.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Unit/THERMAL_MLX90640/MLX90640_I2C_Driver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Unit/THERMAL_MLX90640/MLX90640_API.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Unit/THERMAL_MLX90640/interpolation.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Unit/A_Meter_Unit/EasyLoader_A_Meter/ammeter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Unit/PbHUB/PbHUB/porthub.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Unit/Zigbee_CC2630/P2P_TEST/DRFZigbee.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Unit/Zigbee_CC2630/P2P_TEST/resource.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Unit/Zigbee_CC2630/P2P_TEST/byteArray.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Unit/Zigbee_CC2630/RSSI_TEST/DRFZigbee.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Unit/Zigbee_CC2630/RSSI_TEST/resource.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Unit/Zigbee_CC2630/RSSI_TEST/byteArray.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Unit/RFID_RC522/MFRC522_I2C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Unit/UHF_RFID_JRD4035/RFID_command_basics.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Unit/UHF_RFID_JRD4035/RFID_command.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Unit/CAN/ESP32CAN.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Advanced/Display/HZK16/display_ch.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Advanced/WIFI/WiFiSetting/Parsing.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Advanced/WIFI/WiFiSetting/WebServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/Font72rle.c"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/Font32rle.c"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/glcdfont.c"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/Font16.c"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/Font7srle.c"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/Font64rle.c"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/utility/pngle.c"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/utility/qrcode.c"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Module/AC-SOCKET/modbus.c"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/core2_for_aws/FactoryTest/rect_320_20.c"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/core2_for_aws/FactoryTest/power.c"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/core2_for_aws/FactoryTest/SettingAppImage.c"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/core2_for_aws/FactoryTest/digNumber_35px.c"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/core2_for_aws/FactoryTest/TimerAppImage.c"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/core2_for_aws/FactoryTest/sdCardImage.c"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/core2_for_aws/FactoryTest/image.c"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/core2_for_aws/FactoryTest/Number8x7.c"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/core2_for_aws/FactoryTest/WifiSacn.c"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/core2_for_aws/FactoryTest/imageMenu.c"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/core2_for_aws/FactoryTest/clockImage.c"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/core2_for_aws/FactoryTest/Core2Main.c"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/core2_for_aws/FactoryTest/batPower.c"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/core2_for_aws/FactoryTest/touchImage.c"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/core2_for_aws/FactoryTest/batRect.c"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/core2_for_aws/FactoryTest/initImage.c"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/core2_for_aws/FactoryTest/Core2Cover.c"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/core2_for_aws/FactoryTest/digNumber.c"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/core2_for_aws/FactoryTest/bibisig.c"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/core2_for_aws/FactoryTest/preview_R.c"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/core2_for_aws/FactoryTest/touchFish.c"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Basics/speak/data.c"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Unit/CAN/CAN.c"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/RTC.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/M5Core2.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Free_Fonts.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/M5Touch.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/M5Display.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/AXP192.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/Font72rle.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/Font16.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/EVA_20px.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/EVA_24px.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/HZK16.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/Font32rle.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/CUF_24px.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/Font7srle.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/ASC16.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/Font64rle.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/EVA_11px.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/EVA_10px.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/GFXFF/FreeSerifBold24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/GFXFF/FreeSansBoldOblique9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/GFXFF/FreeSansBoldOblique18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/GFXFF/FreeSans24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/GFXFF/FreeMonoBold12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/GFXFF/FreeMonoOblique18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/GFXFF/FreeSans9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/GFXFF/gfxfont.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/GFXFF/FreeSerif24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/GFXFF/FreeMono9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/GFXFF/FreeMonoBold9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/GFXFF/FreeMonoOblique9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/GFXFF/FreeSerifBoldItalic9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/GFXFF/FreeSerifBold12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/GFXFF/FreeMonoBoldOblique12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/GFXFF/FreeSansOblique24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/GFXFF/FreeSansBold9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/GFXFF/FreeMono24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/GFXFF/FreeSerifBold18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/GFXFF/FreeSansBold12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/GFXFF/FreeMonoBoldOblique18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/GFXFF/FreeSerifItalic18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/GFXFF/FreeSerifBoldItalic18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/GFXFF/FreeMonoBold18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/GFXFF/FreeMono12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/GFXFF/FreeSansBoldOblique12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/GFXFF/FreeMonoOblique12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/GFXFF/FreeSansBold18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/GFXFF/FreeSans18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/GFXFF/FreeSansBold24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/GFXFF/FreeSerif9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/GFXFF/FreeSerif18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/GFXFF/FreeSansOblique18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/GFXFF/FreeSans12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/GFXFF/FreeSerifItalic9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/GFXFF/TomThumb.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/GFXFF/FreeSerifItalic12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/GFXFF/FreeSansBoldOblique24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/GFXFF/FreeSerif12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/GFXFF/FreeMonoOblique24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/GFXFF/FreeSerifItalic24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/GFXFF/FreeSansOblique12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/GFXFF/FreeMonoBoldOblique9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/GFXFF/FreeMonoBoldOblique24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/GFXFF/FreeMonoBold24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/GFXFF/FreeSansOblique9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/GFXFF/FreeSerifBoldItalic24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/GFXFF/FreeMono18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/GFXFF/FreeSerifBold9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/GFXFF/FreeSerifBoldItalic12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/Custom/Orbitron_Light_24.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/Custom/Satisfy_24.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/Custom/Roboto_Thin_24.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/Custom/Orbitron_Light_32.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/Fonts/Custom/Yellowtail_32.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/utility/M5Timer.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/utility/qrcode.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/utility/In_eSPI.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/utility/ILI9341_Rotation.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/utility/quaternionFilters.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/utility/MahonyAHRS.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/utility/CommUtil.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/utility/ILI9341_Init.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/utility/Config.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/utility/ILI9341_Defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/utility/Sprite.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/utility/In_eSPI_Setup.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/utility/pngle.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/utility/MPU6886.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/utility/PointAndZone.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src/utility/M5Button.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Touch/TouchGoal/Goals.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Module/SERVO2_PCA9685/Adafruit_PWMServoDriver.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Module/USB_MAX3421E/usb_mouse/M5Mouse.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Module/PM2.5_PMSA003/Free_Fonts.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Module/PM2.5_PMSA003/DFRobot_SHT20.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Module/COMX_GSM/TFTTerminal.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Module/COMX_LTE-DATA/TFTTerminal.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Module/LORA868_SX1276/LoRa868Duplex/M5LoRa.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Module/AC-SOCKET/protocol.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Module/AC-SOCKET/modbus.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Module/COMX_LTE/TFTTerminal.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Module/COMMU/factory_test/COMMU_Test_A/m5_logo.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Module/COMMU/factory_test/COMMU_Test_B/m5_logo.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Module/COMMU/RS485/commu_rs485_B/m5_logo.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Module/COMMU/RS485/commu_rs485_A/m5_logo.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Module/COMMU/CAN/commu_can_transmitter/m5_logo.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Module/COMMU/CAN/commu_can_receiver/m5_logo.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Module/COMX_NB-IoT/TFTTerminal.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/core2_for_aws/FactoryTest/fft.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/core2_for_aws/FactoryTest/line3D.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Unit/THERMAL_MLX90640/MLX90640_API.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Unit/THERMAL_MLX90640/MLX90640_I2C_Driver.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Unit/A_Meter_Unit/EasyLoader_A_Meter/ammeter.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Unit/PbHUB/PbHUB/porthub.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Unit/Zigbee_CC2630/P2P_TEST/byteArray.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Unit/Zigbee_CC2630/P2P_TEST/resource.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Unit/Zigbee_CC2630/P2P_TEST/DRFZigbee.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Unit/Zigbee_CC2630/RSSI_TEST/byteArray.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Unit/Zigbee_CC2630/RSSI_TEST/resource.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Unit/Zigbee_CC2630/RSSI_TEST/DRFZigbee.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Unit/RFID_RC522/MFRC522_I2C.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Unit/UHF_RFID_JRD4035/RFID_command.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Unit/CAN/CAN.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Unit/CAN/CAN_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Unit/CAN/ESP32CAN.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Unit/CAN/can_regdef.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Advanced/Display/HZK16/str.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Advanced/Display/HZK16/display_ch.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Advanced/Display/Display_Unicode/CUF_24px.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Advanced/WIFI/WiFiSetting/WebServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Advanced/WIFI/WiFiSetting/detail/RequestHandler.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Core2/examples/Advanced/WIFI/WiFiSetting/detail/RequestHandlersImpl.h"
)

target_include_directories(pac-m5core2 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/M5Core2/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-sd)
    add_subdirectory(../../libs/sd build_pac-sd)
endif()

target_link_libraries(pac-m5core2 INTERFACE
    arduino-compat
    pac-sd
)
