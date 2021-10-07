add_library(pac-allthingstalk-lorawan-sdk INTERFACE)

target_sources(pac-allthingstalk-lorawan-sdk INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lorawan-sdk/src/ABPCredentials.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lorawan-sdk/src/BinaryPayload.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lorawan-sdk/src/GeoLocation.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lorawan-sdk/src/CborPayload.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lorawan-sdk/src/LoRaModem.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lorawan-sdk/src/Credentials.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lorawan-sdk/src/Device.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lorawan-sdk/src/OTAACredentials.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lorawan-sdk/src/Library-Arduino-Cbor/CborDecoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lorawan-sdk/src/Library-Arduino-Cbor/CborEncoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lorawan-sdk/examples/Rapid Development Kit/guard-your-stuff/MMA7660.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lorawan-sdk/examples/Rapid Development Kit/guard-your-stuff/ATT_GPS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lorawan-sdk/examples/Rapid Development Kit/environmental-sensing/Seeed_BME280.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lorawan-sdk/examples/Rapid Development Kit/environmental-sensing/Adafruit_Sensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lorawan-sdk/examples/Rapid Development Kit/environmental-sensing/Adafruit_BME280.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lorawan-sdk/src/AllThingsTalk_LoRaWAN.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lorawan-sdk/src/ABPCredentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lorawan-sdk/src/OTAACredentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lorawan-sdk/src/Device.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lorawan-sdk/src/LoRaModem.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lorawan-sdk/src/Payload.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lorawan-sdk/src/Utils.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lorawan-sdk/src/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lorawan-sdk/src/Options.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lorawan-sdk/src/BinaryPayload.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lorawan-sdk/src/GeoLocation.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lorawan-sdk/src/CborPayload.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lorawan-sdk/src/LoRaOptions.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lorawan-sdk/src/Library-Arduino-Cbor/CborDecoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lorawan-sdk/src/Library-Arduino-Cbor/CborEncoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lorawan-sdk/examples/Product Development Kit/TrackAndTrace_Lora/keys.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lorawan-sdk/examples/Rapid Development Kit/count-visits/keys.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lorawan-sdk/examples/Rapid Development Kit/guard-your-stuff/MMA7660.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lorawan-sdk/examples/Rapid Development Kit/guard-your-stuff/ATT_GPS.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lorawan-sdk/examples/Rapid Development Kit/guard-your-stuff/keys.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lorawan-sdk/examples/Rapid Development Kit/pushbutton/keys.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lorawan-sdk/examples/Rapid Development Kit/environmental-sensing/keys.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lorawan-sdk/examples/Rapid Development Kit/environmental-sensing/Adafruit_Sensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lorawan-sdk/examples/Rapid Development Kit/environmental-sensing/Adafruit_BME280.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lorawan-sdk/examples/Rapid Development Kit/environmental-sensing/Seeed_BME280.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lorawan-sdk/examples/SDK Examples/LoraOptions/keys.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lorawan-sdk/examples/SDK Examples/IotDataPoint/keys.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lorawan-sdk/examples/SDK Examples/OTAARetry/keys.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lorawan-sdk/examples/SDK Examples/GPSCBOR/keys.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lorawan-sdk/examples/SDK Examples/HelloLora/keys.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lorawan-sdk/examples/SDK Examples/BinaryPayloads/keys.h"
)

target_include_directories(pac-allthingstalk-lorawan-sdk INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-lorawan-sdk/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-allthingstalk-lorawan-sdk INTERFACE
    arduino-compat
)
