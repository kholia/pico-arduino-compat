add_library(pac-beelan-lorawan INTERFACE)

target_sources(pac-beelan-lorawan INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-LoRaWAN/src/arduino-rfm/Encrypt.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-LoRaWAN/src/arduino-rfm/Conversions.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-LoRaWAN/src/arduino-rfm/lorawan-arduino-rfm.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-LoRaWAN/src/arduino-rfm/LoRaMAC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-LoRaWAN/src/arduino-rfm/RFM95.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-LoRaWAN/src/arduino-rfm/AES-128.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-LoRaWAN/src/lorawan.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-LoRaWAN/src/arduino-rfm/AES-128.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-LoRaWAN/src/arduino-rfm/Config.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-LoRaWAN/src/arduino-rfm/LoRaMAC.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-LoRaWAN/src/arduino-rfm/lorawan-arduino-rfm.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-LoRaWAN/src/arduino-rfm/Encrypt.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-LoRaWAN/src/arduino-rfm/Conversions.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-LoRaWAN/src/arduino-rfm/RFM95.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-LoRaWAN/src/arduino-rfm/Struct.h"
)

target_include_directories(pac-beelan-lorawan INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-LoRaWAN/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-beelan-lorawan INTERFACE
    arduino-compat
)
