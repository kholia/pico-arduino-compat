add_library(pac-blynkethernet_manager INTERFACE)

target_sources(pac-blynkethernet_manager INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/LibraryPatches/Blynk-1.0.0/utility/BlynkDebug.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/LibraryPatches/UIPEthernet/UIPEthernet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/LibraryPatches/UIPEthernet/utility/Enc28J60Network.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/LibraryPatches/UIPEthernet-2.0.9/UIPEthernet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/LibraryPatches/UIPEthernet-2.0.9/utility/Enc28J60Network.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/LibraryPatches/Ethernet2/src/Ethernet2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/LibraryPatches/Ethernet2/src/EthernetUdp2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/LibraryPatches/Ethernet/src/Ethernet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/LibraryPatches/Ethernet/src/EthernetServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/LibraryPatches/Ethernet/src/utility/w5100.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/LibraryPatches/EthernetLarge/src/EthernetLarge.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/LibraryPatches/EthernetLarge/src/EthernetServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/LibraryPatches/EthernetLarge/src/utility/w5100.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/LibraryPatches/Ethernet3/src/Ethernet3.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/LibraryPatches/Blynk-0.6.1/utility/BlynkDebug.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/1.0.0/variants/NINA_B112_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/1.0.0/variants/NINA_B302_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.20.5/variants/NINA_B112_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.20.5/variants/NINA_B302_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.23.0/variants/NINA_B112_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.23.0/variants/NINA_B302_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.22.1/variants/NINA_B112_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.22.1/variants/NINA_B302_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.19.0/variants/NINA_B112_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.19.0/variants/NINA_B302_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.20.1/variants/NINA_B112_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.20.1/variants/NINA_B302_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.21.0/variants/NINA_B112_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.21.0/variants/NINA_B302_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.22.0/variants/NINA_B112_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.22.0/variants/NINA_B302_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.24.0/variants/NINA_B112_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.24.0/variants/NINA_B302_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/LibraryPatches/Blynk-1.0.0/Blynk/BlynkDetectDevice.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/LibraryPatches/UIPEthernet/UIPEthernet.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/LibraryPatches/UIPEthernet/utility/Enc28J60Network.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/LibraryPatches/UIPEthernet-2.0.9/UIPEthernet.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/LibraryPatches/UIPEthernet-2.0.9/utility/Enc28J60Network.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/LibraryPatches/esp32/cores/esp32/Server.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/LibraryPatches/Ethernet2/src/EthernetUdp2.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/LibraryPatches/Ethernet2/src/Ethernet2.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/LibraryPatches/Ethernet/src/Ethernet.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/LibraryPatches/Ethernet/src/utility/w5100.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/LibraryPatches/EthernetLarge/src/EthernetLarge.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/LibraryPatches/EthernetLarge/src/utility/w5100.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/LibraryPatches/Ethernet3/src/Ethernet3.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/LibraryPatches/Blynk-0.6.1/Blynk/BlynkDetectDevice.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/LibraryPatches/Blynk-0.6.1/Blynk/BlynkProtocol.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/rp2040/hardware/rp2040/1.4.0/cores/rp2040/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/rp2040/hardware/rp2040/1.3.1/cores/rp2040/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/1.0.0/cores/nRF5/Udp.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/1.0.0/variants/NINA_B112_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/1.0.0/variants/NINA_B112_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/1.0.0/variants/NINA_B302_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/1.0.0/variants/NINA_B302_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.20.5/cores/nRF5/Udp.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.20.5/variants/NINA_B112_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.20.5/variants/NINA_B112_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.20.5/variants/NINA_B302_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.20.5/variants/NINA_B302_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.23.0/cores/nRF5/Udp.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.23.0/variants/NINA_B112_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.23.0/variants/NINA_B112_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.23.0/variants/NINA_B302_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.23.0/variants/NINA_B302_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.22.1/cores/nRF5/Udp.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.22.1/variants/NINA_B112_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.22.1/variants/NINA_B112_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.22.1/variants/NINA_B302_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.22.1/variants/NINA_B302_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.19.0/cores/nRF5/Udp.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.19.0/variants/NINA_B112_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.19.0/variants/NINA_B112_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.19.0/variants/NINA_B302_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.19.0/variants/NINA_B302_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.20.1/cores/nRF5/Udp.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.20.1/variants/NINA_B112_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.20.1/variants/NINA_B112_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.20.1/variants/NINA_B302_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.20.1/variants/NINA_B302_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.21.0/cores/nRF5/Udp.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.21.0/variants/NINA_B112_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.21.0/variants/NINA_B112_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.21.0/variants/NINA_B302_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.21.0/variants/NINA_B302_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.22.0/cores/nRF5/Udp.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.22.0/variants/NINA_B112_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.22.0/variants/NINA_B112_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.22.0/variants/NINA_B302_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.22.0/variants/NINA_B302_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.24.0/cores/nRF5/Udp.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.24.0/variants/NINA_B112_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.24.0/variants/NINA_B112_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.24.0/variants/NINA_B302_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/adafruit/hardware/nrf52/0.24.0/variants/NINA_B302_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/Seeeduino/hardware/samd/1.8.1/cores/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/Seeeduino/hardware/samd/1.7.8/cores/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/Seeeduino/hardware/samd/1.7.7/cores/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/Seeeduino/hardware/samd/1.7.9/cores/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/arduino/hardware/samd/1.8.6/cores/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/arduino/hardware/samd/1.8.9/cores/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/arduino/hardware/samd/1.8.8/cores/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/arduino/hardware/samd/1.8.8/cores/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/arduino/hardware/samd/1.8.7/cores/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/STM32/hardware/stm32/1.9.0/variants/NUCLEO_L053R8/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/STM32/hardware/stm32/1.9.0/variants/NUCLEO_F767ZI/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/STM32/hardware/stm32/1.9.0/system/STM32F7xx/stm32f7xx_hal_conf_default.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/STM32/hardware/stm32/1.9.0/system/STM32F4xx/stm32f4xx_hal_conf_default.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/STM32/hardware/stm32/2.1.0/variants/STM32F7xx/F765Z(G-I)T_F767Z(G-I)T_F777ZIT/variant_NUCLEO_F767ZI.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/STM32/hardware/stm32/2.1.0/variants/STM32L0xx/L052R(6-8)T_L053R(6-8)T_L063R8T/variant_generic.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/STM32/hardware/stm32/2.1.0/system/STM32F7xx/stm32f7xx_hal_conf_default.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/STM32/hardware/stm32/2.1.0/system/STM32F4xx/stm32f4xx_hal_conf_default.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/STM32/hardware/stm32/2.0.0/variants/L052R(6-8)H_L053R(6-8)H/variant_generic.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/STM32/hardware/stm32/2.0.0/variants/F765Z(G-I)T_F767Z(G-I)T_F777ZIT/variant_NUCLEO_F767ZI.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/STM32/hardware/stm32/2.0.0/system/STM32F7xx/stm32f7xx_hal_conf_default.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/STM32/hardware/stm32/2.0.0/system/STM32F4xx/stm32f4xx_hal_conf_default.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/hardware/teensy/avr/cores/teensy4/Stream.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/hardware/teensy/avr/cores/teensy3/Stream.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/Packages_Patches/hardware/teensy/avr/cores/teensy/Stream.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/src/BlynkSimpleEthernetENC.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/src/BlynkSimpleUIPEthernet_WM.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/src/BlynkSimpleEthernetV2_0_WM.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/src/BlynkSimpleEthernet_WM.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/src/BlynkSimpleEthernetENC_SSL.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/src/BlynkSimpleEthernetENC_SSL_WM.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/src/BlynkSimpleEthernet2_WM.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/src/BlynkSimpleEthernetSSL_WM.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/src/BlynkSimpleEthernetENC_WM.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/src/BlynkSimpleUIPEthernetSSL_WM.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/src/Adapters/BlynkEthernet_DUE_WM.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/src/Adapters/BlynkEthernet_NRF52_WM.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/src/Adapters/BlynkEthernet_ESP8266_WM.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/src/Adapters/BlynkEthernet_Mbed_RP2040_WM.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/src/Adapters/BlynkEthernetENC.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/src/Adapters/BlynkEthernet_SAMD_WM.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/src/Adapters/BlynkEthernet_RP2040_WM.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/src/Adapters/BlynkEthernet_ESP32_WM.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/src/Adapters/BlynkEthernet_WM.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/EthernetENC_Blynk_SAMD/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/EthernetENC_Blynk_SAMD/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/EthernetENC_Blynk_SAMD/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_Blynk_SAMD/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_Blynk_SAMD/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_Blynk_SAMD/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/EthernetENC_Blynk_SAM_DUE/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/EthernetENC_Blynk_SAM_DUE/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/EthernetENC_Blynk_SAM_DUE/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/DHT11_W5500/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/DHT11_W5500/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/DHT11_W5500/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_WM_Config_RP2040/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_WM_Config_RP2040/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_WM_Config_RP2040/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_WM_Config_SAM_DUE/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_WM_Config_SAM_DUE/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_WM_Config_SAM_DUE/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/EthernetENC_Blynk_nRF52/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/EthernetENC_Blynk_nRF52/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/EthernetENC_Blynk_nRF52/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/ENC28J60_Blynk/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/ENC28J60_Blynk/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/ENC28J60_Blynk/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_Blynk_Email_RP2040/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_Blynk_Email_RP2040/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_Blynk_Email_RP2040/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/ENC28J60_WM_Config/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/ENC28J60_WM_Config/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/ENC28J60_WM_Config/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/AM2315_W5500/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/AM2315_W5500/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/AM2315_W5500/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_Blynk_Email_Teensy/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_Blynk_Email_Teensy/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_Blynk_Email_Teensy/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_Blynk_Email/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_Blynk_Email/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_Blynk_Email/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_Blynk_Teensy/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_Blynk_Teensy/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_Blynk_Teensy/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/NativeEthernet_WM_Config_Teensy/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/NativeEthernet_WM_Config_Teensy/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/NativeEthernet_WM_Config_Teensy/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_WM_Config_Teensy/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_WM_Config_Teensy/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_WM_Config_Teensy/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_Blynk_Email_SAMD/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_Blynk_Email_SAMD/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_Blynk_Email_SAMD/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_Blynk_RP2040/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_Blynk_RP2040/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_Blynk_RP2040/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_Blynk_Email_SAM_DUE/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_Blynk_Email_SAM_DUE/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_Blynk_Email_SAM_DUE/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_Blynk_Email_nRF52/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_Blynk_Email_nRF52/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_Blynk_Email_nRF52/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_WM_Config_SAMD/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_WM_Config_SAMD/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_WM_Config_SAMD/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/ENC28J60_Blynk_Email/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/ENC28J60_Blynk_Email/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/ENC28J60_Blynk_Email/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_Blynk_SAM_DUE/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_Blynk_SAM_DUE/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_Blynk_SAM_DUE/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/EthernetENC_Blynk_RP2040/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/EthernetENC_Blynk_RP2040/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/EthernetENC_Blynk_RP2040/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_Blynk_nRF52/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_Blynk_nRF52/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_Blynk_nRF52/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_WM_Config_nRF52/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_WM_Config_nRF52/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_WM_Config_nRF52/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_WM_Config/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_WM_Config/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_WM_Config/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_Blynk/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_Blynk/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/W5500_Blynk/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/EthernetENC_Blynk_Teensy/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/EthernetENC_Blynk_Teensy/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/examples/EthernetENC_Blynk_Teensy/Credentials.h"
)

target_include_directories(pac-blynkethernet_manager INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BlynkEthernet_WM/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-blynkethernet_manager INTERFACE
    arduino-compat
)
