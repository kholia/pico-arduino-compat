add_library(pac-esp8266_at_webserver INTERFACE)

target_sources(pac-esp8266_at_webserver INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/1.0.0/variants/NINA_B112_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/1.0.0/variants/NINA_B302_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.20.5/variants/NINA_B112_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.20.5/variants/NINA_B302_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.23.0/variants/NINA_B112_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.23.0/variants/NINA_B302_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.22.1/variants/NINA_B112_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.22.1/variants/NINA_B302_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.19.0/variants/NINA_B112_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.19.0/variants/NINA_B302_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.20.1/variants/NINA_B112_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.20.1/variants/NINA_B302_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.21.0/variants/NINA_B112_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.21.0/variants/NINA_B302_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.22.0/variants/NINA_B112_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.22.0/variants/NINA_B302_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.24.0/variants/NINA_B112_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.24.0/variants/NINA_B302_ublox/variant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/src/utility/RingBuffer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/src/utility/ESP8266_AT_Drv.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/src/libb64/cencode.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/src/libb64/cdecode.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/rp2040/hardware/rp2040/1.4.0/cores/rp2040/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/rp2040/hardware/rp2040/1.3.1/cores/rp2040/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/1.0.0/cores/nRF5/Udp.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/1.0.0/variants/NINA_B112_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/1.0.0/variants/NINA_B112_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/1.0.0/variants/NINA_B302_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/1.0.0/variants/NINA_B302_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.20.5/cores/nRF5/Udp.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.20.5/variants/NINA_B112_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.20.5/variants/NINA_B112_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.20.5/variants/NINA_B302_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.20.5/variants/NINA_B302_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.23.0/cores/nRF5/Udp.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.23.0/variants/NINA_B112_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.23.0/variants/NINA_B112_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.23.0/variants/NINA_B302_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.23.0/variants/NINA_B302_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.22.1/cores/nRF5/Udp.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.22.1/variants/NINA_B112_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.22.1/variants/NINA_B112_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.22.1/variants/NINA_B302_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.22.1/variants/NINA_B302_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.19.0/cores/nRF5/Udp.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.19.0/variants/NINA_B112_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.19.0/variants/NINA_B112_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.19.0/variants/NINA_B302_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.19.0/variants/NINA_B302_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.20.1/cores/nRF5/Udp.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.20.1/variants/NINA_B112_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.20.1/variants/NINA_B112_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.20.1/variants/NINA_B302_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.20.1/variants/NINA_B302_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.21.0/cores/nRF5/Udp.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.21.0/variants/NINA_B112_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.21.0/variants/NINA_B112_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.21.0/variants/NINA_B302_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.21.0/variants/NINA_B302_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.22.0/cores/nRF5/Udp.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.22.0/variants/NINA_B112_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.22.0/variants/NINA_B112_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.22.0/variants/NINA_B302_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.22.0/variants/NINA_B302_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.24.0/cores/nRF5/Udp.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.24.0/variants/NINA_B112_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.24.0/variants/NINA_B112_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.24.0/variants/NINA_B302_ublox/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/adafruit/hardware/nrf52/0.24.0/variants/NINA_B302_ublox/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/Seeeduino/hardware/samd/1.8.1/cores/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/Seeeduino/hardware/samd/1.7.8/cores/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/Seeeduino/hardware/samd/1.7.7/cores/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/Seeeduino/hardware/samd/1.7.9/cores/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/arduino/hardware/samd/1.8.6/cores/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/arduino/hardware/samd/1.8.9/cores/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/arduino/hardware/samd/1.8.8/cores/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/arduino/hardware/samd/1.8.8/cores/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/arduino/hardware/samd/1.8.7/cores/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/STM32/hardware/stm32/1.9.0/variants/NUCLEO_L053R8/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/STM32/hardware/stm32/1.9.0/variants/NUCLEO_F767ZI/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/STM32/hardware/stm32/1.9.0/system/STM32F7xx/stm32f7xx_hal_conf_default.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/STM32/hardware/stm32/1.9.0/system/STM32F4xx/stm32f4xx_hal_conf_default.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/STM32/hardware/stm32/2.1.0/variants/STM32F7xx/F765Z(G-I)T_F767Z(G-I)T_F777ZIT/variant_NUCLEO_F767ZI.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/STM32/hardware/stm32/2.1.0/variants/STM32L0xx/L052R(6-8)T_L053R(6-8)T_L063R8T/variant_generic.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/STM32/hardware/stm32/2.1.0/system/STM32F7xx/stm32f7xx_hal_conf_default.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/STM32/hardware/stm32/2.1.0/system/STM32F4xx/stm32f4xx_hal_conf_default.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/STM32/hardware/stm32/2.0.0/variants/L052R(6-8)H_L053R(6-8)H/variant_generic.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/STM32/hardware/stm32/2.0.0/variants/F765Z(G-I)T_F767Z(G-I)T_F777ZIT/variant_NUCLEO_F767ZI.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/STM32/hardware/stm32/2.0.0/system/STM32F7xx/stm32f7xx_hal_conf_default.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/STM32/hardware/stm32/2.0.0/system/STM32F4xx/stm32f4xx_hal_conf_default.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/hardware/teensy/avr/cores/teensy4/Stream.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/hardware/teensy/avr/cores/teensy3/Stream.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/Packages_Patches/hardware/teensy/avr/cores/teensy/Stream.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/src/ESP8266_AT_Server.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/src/ESP8266_AT-impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/src/ESP8266_AT.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/src/ESP8266_AT_Client-impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/src/ESP8266_AT_Client.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/src/ESP8266_AT_Udp-impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/src/Parsing-impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/src/ESP8266_AT_Udp.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/src/ESP8266_AT_Server-impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/src/ESP8266_AT_WebServer-impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/src/ESP8266_AT_WebServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/src/libb64/cdecode.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/src/libb64/cencode.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/src/utility/RingBuffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/src/utility/ESP8266_AT_Drv.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/src/utility/mimetable.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/src/utility/RequestHandler.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/src/utility/ESP8266_AT_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/src/utility/RequestHandlersImpl.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/examples/UdpSendReceive/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/examples/WebServer/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/examples/UdpNTPClient/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/examples/ScanNetworks/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/examples/WebServerAP/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/examples/HttpBasicAuth/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/examples/HelloServer2/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/examples/ConnectWPA/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/examples/HelloServer/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/examples/WebClientRepeating/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/examples/MQTTClient_Auth/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/examples/WebClient/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/examples/PostServer/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/examples/AdvancedWebServer_STM32/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/examples/SimpleAuthentication/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/examples/AdvancedWebServer/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/examples/MQTTClient_Basic/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/examples/MQTT_ThingStream/defines.h"
)

target_include_directories(pac-esp8266_at_webserver INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP8266_AT_WebServer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-esp8266_at_webserver INTERFACE
    arduino-compat
)
