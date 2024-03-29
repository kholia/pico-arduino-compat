add_library(pac-asksinpp INTERFACE)

target_sources(pac-asksinpp INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/aes_keyschedule.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/aes_dec.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/HMID.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/aes128_enc.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/aes_enc.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/AlarmClock.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/PhaseCut.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/Led.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/Globals.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/aes128_dec.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/gf256mul.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/examples/tests/dim.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/examples/tests/blind.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/aes_sbox.c"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/aes_invsbox.c"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/RFID.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/Remote.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/ThreeState.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/IButton.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/AskSinPP.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/StateMachine.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/Led.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/aes_enc.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/Sign.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/Alarm.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/Button.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/Sensors.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/aes_keyschedule.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/aes128_dec.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/ResetOnBoot.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/aes_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/gf256mul.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/RingBuffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/Defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/BatterySensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/Device.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/aes_sbox.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/Motion.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/ContactState.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/aes_dec.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/HMID.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/Storage.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/ChannelList.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/Link.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/Switch.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/Weather.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/Peer.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/MultiChannelDevice.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/aes.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/Message.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/Pins.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/Atomic.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/aes128_enc.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/Blind.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/Dimmer.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/Radio.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/AlarmClock.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/Buzzer.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/cm.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/PhaseCut.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/aes_invsbox.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/Activity.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/Channel.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/Register.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/sensors/Bh1750.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/sensors/Vl53l0x.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/sensors/Dht.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/sensors/Si7021.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/sensors/MLX90614.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/sensors/Sht31.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/sensors/Ds18b20.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/sensors/Opt3001.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/sensors/Ntc.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/sensors/Aht1x.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/sensors/Tsl2561.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/sensors/Bmp180.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/sensors/Bme280.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/sensors/Max6675.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/sensors/Max44009.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/sensors/As5600.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/sensors/Sht10.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/sensors/Veml6070.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/sensors/Sht21.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/sensors/PinPosition.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/displays/Lcd4seg.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/displays/Lcd6749.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/examples/STM32Lxx/FreqTest/hal_conf_extra.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/examples/STM32Lxx/FreqTest/AskSin32Duino.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/examples/STM32Lxx/HM-LC-DW-WM/hal_conf_extra.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/examples/STM32Lxx/HM-LC-DW-WM/AskSin32Duino.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/examples/STM32Lxx/HM-LC-Dim1PWM-CV/hal_conf_extra.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/examples/STM32Lxx/HM-LC-Dim1PWM-CV/AskSin32Duino.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/actors/PushButton.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/actors/PWM.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/actors/PCF8574.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/actors/PCA9685.h"
  "${CMAKE_CURRENT_LIST_DIR}/AskSinPP/actors/Motor.h"
)

target_include_directories(pac-asksinpp INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AskSinPP"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-asksinpp INTERFACE
    arduino-compat
)
