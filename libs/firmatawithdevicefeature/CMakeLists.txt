add_library(firmatawithdevicefeature INTERFACE)

target_sources(firmatawithdevicefeature INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FirmataWithDeviceFeature/src/FirmataExt.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataWithDeviceFeature/src/DeviceFirmata.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataWithDeviceFeature/src/ConfigurableFirmata.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataWithDeviceFeature/src-features/AnalogInputFirmata.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataWithDeviceFeature/src-features/ServoFirmata.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataWithDeviceFeature/src-features/AnalogOutputFirmata.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataWithDeviceFeature/src-features/DigitalInputFirmata.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataWithDeviceFeature/src-features/FirmataScheduler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataWithDeviceFeature/src-features/StepperFirmata.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataWithDeviceFeature/src-features/SerialFirmata.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataWithDeviceFeature/src-features/AnalogFirmata.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataWithDeviceFeature/src-features/DigitalOutputFirmata.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataWithDeviceFeature/src-features/Encoder7Bit.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataWithDeviceFeature/src-features/OneWireFirmata.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataWithDeviceFeature/src-features/I2CFirmata.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataWithDeviceFeature/src-features/EthernetClientStream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataWithDeviceFeature/src-features/FirmataReporting.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataWithDeviceFeature/src-features/utility/WiFi101Stream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataWithDeviceFeature/src-features/utility/OneWire.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataWithDeviceFeature/src-features/utility/WiFiStream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataWithDeviceFeature/src-features/utility/FirmataStepper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataWithDeviceFeature/src/ConfigurableFirmata.h"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataWithDeviceFeature/src/FirmataExt.h"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataWithDeviceFeature/src/FirmataFeature.h"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataWithDeviceFeature/src/DeviceFirmata.h"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataWithDeviceFeature/src/utility/Boards.h"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataWithDeviceFeature/examples/ConfigurableFirmataDeviceDriver/SelectedDeviceDrivers.h"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataWithDeviceFeature/src-features/FirmataReporting.h"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataWithDeviceFeature/src-features/I2CFirmata.h"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataWithDeviceFeature/src-features/SerialFirmata.h"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataWithDeviceFeature/src-features/Encoder7Bit.h"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataWithDeviceFeature/src-features/EthernetClientStream.h"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataWithDeviceFeature/src-features/StepperFirmata.h"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataWithDeviceFeature/src-features/AnalogOutputFirmata.h"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataWithDeviceFeature/src-features/DigitalOutputFirmata.h"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataWithDeviceFeature/src-features/OneWireFirmata.h"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataWithDeviceFeature/src-features/AnalogInputFirmata.h"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataWithDeviceFeature/src-features/FirmataScheduler.h"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataWithDeviceFeature/src-features/AnalogFirmata.h"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataWithDeviceFeature/src-features/ServoFirmata.h"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataWithDeviceFeature/src-features/AnalogWrite.h"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataWithDeviceFeature/src-features/DigitalInputFirmata.h"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataWithDeviceFeature/src-features/utility/WiFiStream.h"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataWithDeviceFeature/src-features/utility/FirmataStepper.h"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataWithDeviceFeature/src-features/utility/firmataDebug.h"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataWithDeviceFeature/src-features/utility/WiFi101Stream.h"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataWithDeviceFeature/src-features/utility/OneWire.h"
)

target_include_directories(firmatawithdevicefeature INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FirmataWithDeviceFeature/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(firmatawithdevicefeature INTERFACE
    arduino-compat
)
