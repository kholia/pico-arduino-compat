add_library(pac-sinricpro_generic INTERFACE)

target_sources(pac-sinricpro_generic INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/LibraryPatches/UIPEthernet/UIPEthernet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/LibraryPatches/UIPEthernet/utility/Enc28J60Network.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/LibraryPatches/UIPEthernet-2.0.9/UIPEthernet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/LibraryPatches/UIPEthernet-2.0.9/utility/Enc28J60Network.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/LibraryPatches/Ethernet2/src/Ethernet2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/LibraryPatches/Ethernet2/src/EthernetUdp2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/LibraryPatches/Ethernet/src/Ethernet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/LibraryPatches/Ethernet/src/EthernetServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/LibraryPatches/Ethernet/src/utility/w5100.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/LibraryPatches/EthernetLarge/src/EthernetLarge.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/LibraryPatches/EthernetLarge/src/EthernetServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/LibraryPatches/EthernetLarge/src/utility/w5100.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/LibraryPatches/Ethernet3/src/Ethernet3.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/1.0.0/variants/NINA_B112_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/1.0.0/variants/NINA_B302_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.20.5/variants/NINA_B112_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.20.5/variants/NINA_B302_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.23.0/variants/NINA_B112_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.23.0/variants/NINA_B302_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.22.1/variants/NINA_B112_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.22.1/variants/NINA_B302_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.19.0/variants/NINA_B112_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.19.0/variants/NINA_B302_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.20.1/variants/NINA_B112_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.20.1/variants/NINA_B302_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.21.0/variants/NINA_B112_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.21.0/variants/NINA_B302_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.22.0/variants/NINA_B112_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.22.0/variants/NINA_B302_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.24.0/variants/NINA_B112_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.24.0/variants/NINA_B302_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/doc-examples/callbacks.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/src/extralib/Crypto/AES.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/src/extralib/Crypto/AESLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/src/extralib/Crypto/Base64.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/src/extralib/Crypto/Crypto.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/LibraryPatches/UIPEthernet/UIPEthernet.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/LibraryPatches/UIPEthernet/utility/Enc28J60Network.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/LibraryPatches/UIPEthernet-2.0.9/UIPEthernet.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/LibraryPatches/UIPEthernet-2.0.9/utility/Enc28J60Network.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/LibraryPatches/esp32/cores/esp32/Server.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/LibraryPatches/Ethernet2/src/EthernetUdp2.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/LibraryPatches/Ethernet2/src/Ethernet2.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/LibraryPatches/Ethernet/src/Ethernet.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/LibraryPatches/Ethernet/src/utility/w5100.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/LibraryPatches/EthernetLarge/src/EthernetLarge.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/LibraryPatches/EthernetLarge/src/utility/w5100.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/LibraryPatches/Ethernet3/src/Ethernet3.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/rp2040/hardware/rp2040/1.4.0/cores/rp2040/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/rp2040/hardware/rp2040/1.3.1/cores/rp2040/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/1.0.0/cores/nRF5/Udp.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/1.0.0/variants/NINA_B112_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/1.0.0/variants/NINA_B112_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/1.0.0/variants/NINA_B302_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/1.0.0/variants/NINA_B302_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.20.5/cores/nRF5/Udp.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.20.5/variants/NINA_B112_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.20.5/variants/NINA_B112_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.20.5/variants/NINA_B302_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.20.5/variants/NINA_B302_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.23.0/cores/nRF5/Udp.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.23.0/variants/NINA_B112_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.23.0/variants/NINA_B112_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.23.0/variants/NINA_B302_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.23.0/variants/NINA_B302_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.22.1/cores/nRF5/Udp.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.22.1/variants/NINA_B112_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.22.1/variants/NINA_B112_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.22.1/variants/NINA_B302_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.22.1/variants/NINA_B302_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.19.0/cores/nRF5/Udp.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.19.0/variants/NINA_B112_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.19.0/variants/NINA_B112_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.19.0/variants/NINA_B302_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.19.0/variants/NINA_B302_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.20.1/cores/nRF5/Udp.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.20.1/variants/NINA_B112_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.20.1/variants/NINA_B112_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.20.1/variants/NINA_B302_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.20.1/variants/NINA_B302_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.21.0/cores/nRF5/Udp.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.21.0/variants/NINA_B112_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.21.0/variants/NINA_B112_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.21.0/variants/NINA_B302_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.21.0/variants/NINA_B302_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.22.0/cores/nRF5/Udp.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.22.0/variants/NINA_B112_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.22.0/variants/NINA_B112_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.22.0/variants/NINA_B302_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.22.0/variants/NINA_B302_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.24.0/cores/nRF5/Udp.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.24.0/variants/NINA_B112_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.24.0/variants/NINA_B112_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.24.0/variants/NINA_B302_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/adafruit/hardware/nrf52/0.24.0/variants/NINA_B302_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/Seeeduino/hardware/samd/1.8.1/cores/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/Seeeduino/hardware/samd/1.7.8/cores/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/Seeeduino/hardware/samd/1.7.7/cores/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/Seeeduino/hardware/samd/1.7.9/cores/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/arduino/hardware/samd/1.8.6/cores/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/arduino/hardware/samd/1.8.9/cores/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/arduino/hardware/samd/1.8.8/cores/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/arduino/hardware/samd/1.8.8/cores/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/arduino/hardware/samd/1.8.7/cores/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/STM32/hardware/stm32/1.9.0/variants/NUCLEO_L053R8/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/STM32/hardware/stm32/1.9.0/variants/NUCLEO_F767ZI/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/STM32/hardware/stm32/1.9.0/system/STM32F7xx/stm32f7xx_hal_conf_default.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/STM32/hardware/stm32/1.9.0/system/STM32F4xx/stm32f4xx_hal_conf_default.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/STM32/hardware/stm32/2.1.0/variants/STM32F7xx/F765Z(G-I)T_F767Z(G-I)T_F777ZIT/variant_NUCLEO_F767ZI.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/STM32/hardware/stm32/2.1.0/variants/STM32L0xx/L052R(6-8)T_L053R(6-8)T_L063R8T/variant_generic.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/STM32/hardware/stm32/2.1.0/system/STM32F7xx/stm32f7xx_hal_conf_default.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/STM32/hardware/stm32/2.1.0/system/STM32F4xx/stm32f4xx_hal_conf_default.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/STM32/hardware/stm32/2.0.0/variants/L052R(6-8)H_L053R(6-8)H/variant_generic.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/STM32/hardware/stm32/2.0.0/variants/F765Z(G-I)T_F767Z(G-I)T_F777ZIT/variant_NUCLEO_F767ZI.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/STM32/hardware/stm32/2.0.0/system/STM32F7xx/stm32f7xx_hal_conf_default.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/STM32/hardware/stm32/2.0.0/system/STM32F4xx/stm32f4xx_hal_conf_default.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/hardware/teensy/avr/cores/teensy4/Stream.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/hardware/teensy/avr/cores/teensy3/Stream.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/Packages_Patches/hardware/teensy/avr/cores/teensy/Stream.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/src/LeakyBucket.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/src/SinricProMessageid.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/src/SinricProSpeaker.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/src/SinricProPowerSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/src/SinricProSignature.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/src/SinricProBlinds.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/src/SinricProFanUS.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/src/SinricProThermostat.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/src/SinricProUDP.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/src/SinricPro.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/src/SinricProDeviceInterface.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/src/SinricProGarageDoor.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/src/SinricProLock.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/src/SinricProInterface.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/src/SinricProCamera.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/src/SinricProWebsocket.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/src/SinricProDimSwitch.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/src/SinricProConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/src/SinricProSwitch.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/src/SinricProDebug.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/src/SinricProAirQualitySensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/src/SinricProId.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/src/SinricProLight.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/src/SinricProContactsensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/src/SinricProTemperaturesensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/src/SinricProMotionsensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/src/SinricProTV.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/src/SinricProFan.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/src/SinricProQueue.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/src/SinricProWindowAC.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/src/SinricPro_Generic.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/src/SinricProDevice.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/src/SinricProDoorbell.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/src/extralib/Crypto/Crypto.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/src/extralib/Crypto/AES_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/src/extralib/Crypto/AESLib.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/src/extralib/Crypto/Base64.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/src/extralib/Crypto/AES.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Lock/nRF52_Ethernet_Lock/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Lock/SAMD_Ethernet_Lock/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Lock/nRF52_WiFiNINA_Lock/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Lock/Generic_Ethernet_Lock/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Lock/Generic_WiFiNINA_Lock/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Lock/SAMD_WiFiNINA_Lock/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Lock/WIO_Terminal_Lock/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/AirQualitySensor/nRF52_WiFiNINA_AQSensor/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/AirQualitySensor/nRF52_Ethernet_AQSensor_GP2Y1014AU0F/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/AirQualitySensor/Generic_Ethernet_AQSensor_GP2Y1014AU0F/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/AirQualitySensor/nRF52_Ethernet_AQSensor/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/AirQualitySensor/Generic_Ethernet_AQSensor/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/AirQualitySensor/nRF52_WiFiNINA_AQSensor_GP2Y1014AU0F/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/AirQualitySensor/SAMD_Ethernet_AQSensor/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/AirQualitySensor/WIO_Terminal_AQSensor_GP2Y1014AU0F/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/AirQualitySensor/SAMD_WiFiNINA_AQSensor/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/AirQualitySensor/WIO_Terminal_AQSensor/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/AirQualitySensor/SAMD_Ethernet_AQSensor_GP2Y1014AU0F/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/AirQualitySensor/Generic_WiFiNINA_AQSensor_GP2Y1014AU0F/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/AirQualitySensor/SAMD_WiFiNINA_AQSensor_GP2Y1014AU0F/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/AirQualitySensor/Generic_WiFiNINA_AQSensor/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/PowerSensor/Generic_Ethernet_PowerSensor/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/PowerSensor/Generic_WiFiNINA_PowerSensor/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/PowerSensor/SAMD_Ethernet_PowerSensor/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/PowerSensor/nRF52_WiFiNINA_PowerSensor/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/PowerSensor/SAMD_WiFiNINA_PowerSensor/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/PowerSensor/nRF52_Ethernet_PowerSensor/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/PowerSensor/WIO_Terminal_PowerSensor/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/TV/nRF52_WiFiNINA_TV/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/TV/SAMD_WiFiNINA_TV/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/TV/WIO_Terminal_TV/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/TV/Generic_Ethernet_TV/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/TV/Generic_WiFiNINA_TV/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/TV/SAMD_Ethernet_TV/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/TV/nRF52_Ethernet_TV/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/MotionSensor/Generic_WiFiNINA_MotionSensor/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/MotionSensor/nRF52_Ethernet_MotionSensor/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/MotionSensor/WIO_Terminal_MotionSensor/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/MotionSensor/SAMD_WiFiNINA_MotionSensor/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/MotionSensor/Generic_Ethernet_MotionSensor/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/MotionSensor/nRF52_WiFiNINA_MotionSensor/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/MotionSensor/SAMD_Ethernet_MotionSensor/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Thermostat/Generic_Ethernet_Thermostat/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Thermostat/SAMD_Ethernet_Thermostat/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Thermostat/SAMD_WiFiNINA_Thermostat/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Thermostat/nRF52_Ethernet_Thermostat/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Thermostat/WIO_Terminal_Thermostat/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Thermostat/nRF52_WiFiNINA_Thermostat/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Thermostat/Generic_WiFiNINA_Thermostat/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Switch/SAMD_Ethernet/SAMD_Ethernet_Switch/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Switch/SAMD_Ethernet/SAMD_Ethernet_MultiSwitch_advance/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Switch/SAMD_Ethernet/SAMD_Ethernet_MultiSwitch_beginner/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Switch/SAMD_Ethernet/SAMD_Ethernet_MultiSwitch_intermediate/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Switch/nRF52_Ethernet/nRF52_Ethernet_MultiSwitch_intermediate/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Switch/nRF52_Ethernet/nRF52_Ethernet_MultiSwitch_advance/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Switch/nRF52_Ethernet/nRF52_Ethernet_Switch/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Switch/nRF52_Ethernet/nRF52_Ethernet_MultiSwitch_beginner/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Switch/nRF52_WiFiNINA/nRF52_WiFiNINA_Switch/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Switch/nRF52_WiFiNINA/nRF52_WiFiNINA_MultiSwitch_advance/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Switch/nRF52_WiFiNINA/nRF52_WiFiNINA_MultiSwitch_intermediate/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Switch/nRF52_WiFiNINA/nRF52_WiFiNINA_MultiSwitch_beginner/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Switch/Generic_Ethernet/Generic_Ethernet_Switch/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Switch/Generic_Ethernet/Generic_Ethernet_MultiSwitch_advance/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Switch/Generic_Ethernet/Generic_Ethernet_MultiSwitch_beginner/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Switch/Generic_Ethernet/Generic_Ethernet_MultiSwitch_intermediate/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Switch/WIO_Terminal/WIO_Terminal_MultiSwitch_beginner/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Switch/WIO_Terminal/WIO_Terminal_MultiSwitch_advance/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Switch/WIO_Terminal/WIOT_MultiSwitch_LCD/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Switch/WIO_Terminal/WIO_Terminal_MultiSwitch_intermediate/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Switch/WIO_Terminal/WIO_Terminal_Switch/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Switch/SAMD_WiFiNINA/SAMD_WiFiNINA_MultiSwitch_advance/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Switch/SAMD_WiFiNINA/SAMD_WiFiNINA_Switch/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Switch/SAMD_WiFiNINA/SAMD_WiFiNINA_MultiSwitch_beginner/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Switch/SAMD_WiFiNINA/SAMD_WiFiNINA_MultiSwitch_intermediate/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Switch/Generic_WiFiNINA/Generic_WiFiNINA_MultiSwitch_advance/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Switch/Generic_WiFiNINA/Generic_WiFiNINA_Switch/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Switch/Generic_WiFiNINA/Generic_WiFiNINA_MultiSwitch_intermediate/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Switch/Generic_WiFiNINA/Generic_WiFiNINA_MultiSwitch_beginner/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/ContactSensor/Generic_WiFiNINA_ContactSensor/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/ContactSensor/Generic_Ethernet_ContactSensor/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/ContactSensor/WIO_Terminal_ContactSensor/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/ContactSensor/SAMD_WiFiNINA_ContactSensor/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/ContactSensor/nRF52_Ethernet_ContactSensor/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/ContactSensor/SAMD_Ethernet_ContactSensor/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/ContactSensor/nRF52_WiFiNINA_ContactSensor/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/DoorBell/Generic_WiFiNINA_DoorBell/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/DoorBell/nRF52_WiFiNINA_DoorBell/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/DoorBell/nRF52_Ethernet_DoorBell/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/DoorBell/Generic_Ethernet_DoorBell/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/DoorBell/SAMD_WiFiNINA_DoorBell/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/DoorBell/WIO_Terminal_DoorBell/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/DoorBell/SAMD_Ethernet_DoorBell/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Speaker/nRF52_Ethernet_Speaker/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Speaker/Generic_Ethernet_Speaker/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Speaker/Generic_WiFiNINA_Speaker/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Speaker/nRF52_WiFiNINA_Speaker/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Speaker/SAMD_WiFiNINA_Speaker/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Speaker/SAMD_Ethernet_Speaker/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Speaker/WIO_Terminal_Speaker/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Blinds/RP2040_WiFiNINA_Blinds/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Blinds/nRF52_Ethernet_Blinds/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Blinds/Generic_Ethernet_Blinds/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Blinds/nRF52_WiFiNINA_Blinds/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Blinds/SAMD_WiFiNINA_Blinds/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Blinds/SAMD_Ethernet_Blinds/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Blinds/WIO_Terminal_Blinds/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Blinds/Generic_WiFiNINA_Blinds/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Light/SAMD_WiFiNINA_Light/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Light/nRF52_WiFiNINA_Light/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Light/nRF52_Ethernet_Light/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Light/WIO_Terminal_Light/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Light/Generic_WiFiNINA_Light/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Light/SAMD_Ethernet_Light/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Light/Generic_Ethernet_Light/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/TemperatureSensor/SAMD_Ethernet_TemperatureSensor/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/TemperatureSensor/SAMD_WiFiNINA_TemperatureSensor/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/TemperatureSensor/nRF52_Ethernet_TemperatureSensor/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/TemperatureSensor/Generic_WiFiNINA_TemperatureSensor/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/TemperatureSensor/WIO_Terminal_TemperatureSensor/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/TemperatureSensor/nRF52_WiFiNINA_TemperatureSensor/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/TemperatureSensor/Generic_Ethernet_TemperatureSensor/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/DimSwitch/SAMD_Ethernet_DimSwitch/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/DimSwitch/nRF52_WiFiNINA_DimSwitch/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/DimSwitch/SAMD_WiFiNINA_DimSwitch/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/DimSwitch/nRF52_Ethernet_DimSwitch/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/DimSwitch/Generic_WiFiNINA_DimSwitch/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/DimSwitch/WIO_Terminal_DimSwitch/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/DimSwitch/Generic_Ethernet_DimSwitch/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/GarageDoor/nRF52_Ethernet_GarageDoor/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/GarageDoor/nRF52_WiFiNINA_GarageDoor/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/GarageDoor/Generic_Ethernet_GarageDoor/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/GarageDoor/SAMD_Ethernet_GarageDoor/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/GarageDoor/WIO_Terminal_GarageDoor/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/GarageDoor/Generic_WiFiNINA_GarageDoor/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/GarageDoor/SAMD_WiFiNINA_GarageDoor/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Fan/nRF52_WiFiNINA_Fan/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Fan/WIO_Terminal_Fan/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Fan/Generic_WiFiNINA_Fan/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Fan/SAMD_WiFiNINA_Fan/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Fan/Generic_Ethernet_Fan/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Fan/SAMD_Ethernet_Fan/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/Generic/Fan/nRF52_Ethernet_Fan/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/examples/ESP/Camera/select_pins.h"
)

target_include_directories(pac-sinricpro_generic INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SinricPro_Generic/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sinricpro_generic INTERFACE
    arduino-compat
)
