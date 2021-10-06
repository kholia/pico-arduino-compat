add_library(arduino-cloud-provider-examples INTERFACE)

target_sources(arduino-cloud-provider-examples INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudProviderExamples/src/ArduinoCloudProviderExamples.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudProviderExamples/examples/AWS IoT/AWS_IoT_GSM/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudProviderExamples/examples/AWS IoT/AWS_IoT_WiFi/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudProviderExamples/examples/AWS IoT/AWS_IoT_NB/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudProviderExamples/examples/Google Cloud Platform IoT Core/GCP_IoT_Core_WiFi/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudProviderExamples/examples/Google Cloud Platform IoT Core/GCP_IoT_Core_NB/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudProviderExamples/examples/Google Cloud Platform IoT Core/GCP_IoT_Core_GSM/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudProviderExamples/examples/Azure IoT Hub/Azure_IoT_Hub_GSM/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudProviderExamples/examples/Azure IoT Hub/Azure_IoT_Hub_WiFi/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudProviderExamples/examples/Azure IoT Hub/Azure_IoT_Hub_NB/arduino_secrets.h"
)

target_include_directories(arduino-cloud-provider-examples INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudProviderExamples/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arduino-cloud-provider-examples INTERFACE
    arduino-compat
)
