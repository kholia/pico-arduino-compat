add_library(pac-websockets_generic INTERFACE)

target_sources(pac-websockets_generic INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/LibraryPatches/UIPEthernet/UIPEthernet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/LibraryPatches/UIPEthernet/utility/Enc28J60Network.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/LibraryPatches/UIPEthernet-2.0.9/UIPEthernet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/LibraryPatches/UIPEthernet-2.0.9/utility/Enc28J60Network.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/LibraryPatches/Ethernet2/src/Ethernet2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/LibraryPatches/Ethernet2/src/EthernetUdp2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/LibraryPatches/Ethernet/src/Ethernet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/LibraryPatches/Ethernet/src/EthernetServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/LibraryPatches/Ethernet/src/utility/w5100.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/LibraryPatches/EthernetLarge/src/EthernetLarge.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/LibraryPatches/EthernetLarge/src/EthernetServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/LibraryPatches/EthernetLarge/src/utility/w5100.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/LibraryPatches/Ethernet3/src/Ethernet3.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/1.0.0/variants/NINA_B112_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/1.0.0/variants/NINA_B302_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.20.5/variants/NINA_B112_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.20.5/variants/NINA_B302_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.23.0/variants/NINA_B112_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.23.0/variants/NINA_B302_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.22.1/variants/NINA_B112_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.22.1/variants/NINA_B302_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.19.0/variants/NINA_B112_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.19.0/variants/NINA_B302_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.20.1/variants/NINA_B112_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.20.1/variants/NINA_B302_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.21.0/variants/NINA_B112_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.21.0/variants/NINA_B302_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.22.0/variants/NINA_B112_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.22.0/variants/NINA_B302_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.24.0/variants/NINA_B112_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.24.0/variants/NINA_B302_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/src/libsha1/libsha1.c"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/LibraryPatches/UIPEthernet/UIPEthernet.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/LibraryPatches/UIPEthernet/utility/Enc28J60Network.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/LibraryPatches/UIPEthernet-2.0.9/UIPEthernet.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/LibraryPatches/UIPEthernet-2.0.9/utility/Enc28J60Network.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/LibraryPatches/esp32/cores/esp32/Server.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/LibraryPatches/Ethernet2/src/EthernetUdp2.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/LibraryPatches/Ethernet2/src/Ethernet2.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/LibraryPatches/Ethernet/src/Ethernet.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/LibraryPatches/Ethernet/src/utility/w5100.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/LibraryPatches/EthernetLarge/src/EthernetLarge.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/LibraryPatches/EthernetLarge/src/utility/w5100.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/LibraryPatches/Ethernet3/src/Ethernet3.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/industrialshields/hardware/avr/1.1.37/cores/industrialshields/Udp.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/industrialshields/hardware/avr/1.1.36/cores/industrialshields/Udp.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/rp2040/hardware/rp2040/1.4.0/cores/rp2040/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/rp2040/hardware/rp2040/1.3.1/cores/rp2040/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/1.0.0/cores/nRF5/Udp.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/1.0.0/variants/NINA_B112_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/1.0.0/variants/NINA_B112_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/1.0.0/variants/NINA_B302_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/1.0.0/variants/NINA_B302_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.20.5/cores/nRF5/Udp.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.20.5/variants/NINA_B112_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.20.5/variants/NINA_B112_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.20.5/variants/NINA_B302_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.20.5/variants/NINA_B302_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.23.0/cores/nRF5/Udp.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.23.0/variants/NINA_B112_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.23.0/variants/NINA_B112_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.23.0/variants/NINA_B302_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.23.0/variants/NINA_B302_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.22.1/cores/nRF5/Udp.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.22.1/variants/NINA_B112_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.22.1/variants/NINA_B112_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.22.1/variants/NINA_B302_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.22.1/variants/NINA_B302_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.19.0/cores/nRF5/Udp.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.19.0/variants/NINA_B112_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.19.0/variants/NINA_B112_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.19.0/variants/NINA_B302_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.19.0/variants/NINA_B302_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.20.1/cores/nRF5/Udp.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.20.1/variants/NINA_B112_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.20.1/variants/NINA_B112_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.20.1/variants/NINA_B302_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.20.1/variants/NINA_B302_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.21.0/cores/nRF5/Udp.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.21.0/variants/NINA_B112_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.21.0/variants/NINA_B112_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.21.0/variants/NINA_B302_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.21.0/variants/NINA_B302_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.22.0/cores/nRF5/Udp.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.22.0/variants/NINA_B112_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.22.0/variants/NINA_B112_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.22.0/variants/NINA_B302_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.22.0/variants/NINA_B302_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.24.0/cores/nRF5/Udp.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.24.0/variants/NINA_B112_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.24.0/variants/NINA_B112_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.24.0/variants/NINA_B302_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/adafruit/hardware/nrf52/0.24.0/variants/NINA_B302_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/Seeeduino/hardware/samd/1.8.1/cores/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/Seeeduino/hardware/samd/1.7.8/cores/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/Seeeduino/hardware/samd/1.7.7/cores/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/Seeeduino/hardware/samd/1.7.9/cores/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/arduino/hardware/samd/1.8.6/cores/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/arduino/hardware/samd/1.8.9/cores/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/arduino/hardware/samd/1.8.8/cores/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/arduino/hardware/samd/1.8.8/cores/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/arduino/hardware/samd/1.8.7/cores/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/STM32/hardware/stm32/1.9.0/variants/NUCLEO_L053R8/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/STM32/hardware/stm32/1.9.0/variants/NUCLEO_F767ZI/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/STM32/hardware/stm32/1.9.0/system/STM32F7xx/stm32f7xx_hal_conf_default.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/STM32/hardware/stm32/1.9.0/system/STM32F4xx/stm32f4xx_hal_conf_default.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/STM32/hardware/stm32/2.1.0/variants/STM32F7xx/F765Z(G-I)T_F767Z(G-I)T_F777ZIT/variant_NUCLEO_F767ZI.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/STM32/hardware/stm32/2.1.0/variants/STM32L0xx/L052R(6-8)T_L053R(6-8)T_L063R8T/variant_generic.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/STM32/hardware/stm32/2.1.0/system/STM32F7xx/stm32f7xx_hal_conf_default.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/STM32/hardware/stm32/2.1.0/system/STM32F4xx/stm32f4xx_hal_conf_default.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/STM32/hardware/stm32/2.0.0/variants/L052R(6-8)H_L053R(6-8)H/variant_generic.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/STM32/hardware/stm32/2.0.0/variants/F765Z(G-I)T_F767Z(G-I)T_F777ZIT/variant_NUCLEO_F767ZI.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/STM32/hardware/stm32/2.0.0/system/STM32F7xx/stm32f7xx_hal_conf_default.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/STM32/hardware/stm32/2.0.0/system/STM32F4xx/stm32f4xx_hal_conf_default.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/hardware/teensy/avr/cores/teensy4/Stream.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/hardware/teensy/avr/cores/teensy3/Stream.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/Packages_Patches/hardware/teensy/avr/cores/teensy/Stream.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/src/WebSocketsServer_Generic-Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/src/WebSockets4WebServer_Generic.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/src/WebSockets_Generic.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/src/WebSocketsClient_Generic.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/src/WebSocketsClient_Generic-Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/src/WebSocketsDebug_Generic.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/src/WebSocketsVersion_Generic.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/src/SocketIOclient_Generic-Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/src/WebSockets_Generic-Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/src/WebSocketsServer_Generic.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/src/SocketIOclient_Generic.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/src/libb64/cdecode-Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/src/libb64/cencode_inc.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/src/libb64/cdecode_inc.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/src/libb64/cencode-Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/src/libsha1/libsha1.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/examples/WiFiNINA/SAMD_Blynk_NINA_Alexa/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/examples/WiFiNINA/SAMD_Blynk_NINA_Alexa/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/examples/WiFiNINA/SAMD_Blynk_NINA_Alexa/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/examples/WiFiNINA/nRF52_Blynk_NINA_Alexa/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/examples/WiFiNINA/nRF52_Blynk_NINA_Alexa/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/examples/WiFiNINA/nRF52_Blynk_NINA_Alexa/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/examples/ENC28J60/SAMD_Blynk_ENC_Alexa/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/examples/ENC28J60/SAMD_Blynk_ENC_Alexa/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/examples/ENC28J60/SAMD_Blynk_ENC_Alexa/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/examples/ENC28J60/nRF52_Blynk_ENC_Alexa/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/examples/ENC28J60/nRF52_Blynk_ENC_Alexa/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/examples/ENC28J60/nRF52_Blynk_ENC_Alexa/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/examples/W5500/nRF52_Blynk_W5500_Alexa/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/examples/W5500/nRF52_Blynk_W5500_Alexa/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/examples/W5500/nRF52_Blynk_W5500_Alexa/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/examples/W5500/SAMD_Blynk_W5500_Alexa/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/examples/W5500/SAMD_Blynk_W5500_Alexa/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/examples/W5500/SAMD_Blynk_W5500_Alexa/Credentials.h"
)

target_include_directories(pac-websockets_generic INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WebSockets_Generic/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-websockets_generic INTERFACE
    arduino-compat
)
