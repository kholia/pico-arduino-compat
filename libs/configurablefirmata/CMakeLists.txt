add_library(pac-configurablefirmata INTERFACE)

target_sources(pac-configurablefirmata INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/AnalogInputFirmata.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/ServoFirmata.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/AccelStepperFirmata.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/FirmataExt.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/AnalogOutputFirmata.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/DigitalInputFirmata.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/FirmataScheduler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/DhtFirmata.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/StepperFirmata.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/SerialFirmata.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/AnalogFirmata.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/ConfigurableFirmata.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/DigitalOutputFirmata.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/Encoder7Bit.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/Frequency.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/OneWireFirmata.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/I2CFirmata.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/SpiFirmata.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/EthernetClientStream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/FirmataReporting.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/utility/MultiStepper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/utility/OneWire.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/utility/WiFiStream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/utility/FirmataStepper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/utility/BLEStream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/utility/AccelStepper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/FirmataReporting.h"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/I2CFirmata.h"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/SerialFirmata.h"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/Encoder7Bit.h"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/EthernetClientStream.h"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/StepperFirmata.h"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/AnalogOutputFirmata.h"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/Frequency.h"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/DigitalOutputFirmata.h"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/ConfigurableFirmata.h"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/OneWireFirmata.h"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/AnalogInputFirmata.h"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/FirmataExt.h"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/FirmataScheduler.h"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/AnalogFirmata.h"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/DhtFirmata.h"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/FirmataFeature.h"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/ServoFirmata.h"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/AnalogWrite.h"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/DigitalInputFirmata.h"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/SpiFirmata.h"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/AccelStepperFirmata.h"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/utility/WiFiStream.h"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/utility/Boards.h"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/utility/FirmataStepper.h"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/utility/AccelStepper.h"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/utility/WiFiServerStream.h"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/utility/WiFiClientStream.h"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/utility/firmataDebug.h"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/utility/MultiStepper.h"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/utility/BLEStream.h"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src/utility/OneWire.h"
)

target_include_directories(pac-configurablefirmata INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ConfigurableFirmata/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-configurablefirmata INTERFACE
    arduino-compat
)
