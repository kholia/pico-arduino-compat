add_library(aws-sdk-esp8266 INTERFACE)

target_sources(aws-sdk-esp8266 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/aws-sdk-arduino-esp8266/src/ESPAWSImplementations.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/aws-sdk-arduino-esp8266/src/DeviceIndependentInterfaces.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/aws-sdk-arduino-esp8266/src/AmazonDynamoDBClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/aws-sdk-arduino-esp8266/src/AmazonS3Client.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/aws-sdk-arduino-esp8266/src/AWSFoundationalTypes.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/aws-sdk-arduino-esp8266/src/AmazonIOTClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/aws-sdk-arduino-esp8266/src/AWSClient4.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/aws-sdk-arduino-esp8266/src/AmazonKinesisClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/aws-sdk-arduino-esp8266/src/AmazonSNSClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/aws-sdk-arduino-esp8266/src/Utils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/aws-sdk-arduino-esp8266/src/AWSClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/aws-sdk-arduino-esp8266/src/sha256.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/aws-sdk-arduino-esp8266/src/AWSClient2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/aws-sdk-arduino-esp8266/src/jsmn.c"
  "${CMAKE_CURRENT_LIST_DIR}/aws-sdk-arduino-esp8266/src/AmazonDynamoDBClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/aws-sdk-arduino-esp8266/src/jsmn.h"
  "${CMAKE_CURRENT_LIST_DIR}/aws-sdk-arduino-esp8266/src/AmazonKinesisClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/aws-sdk-arduino-esp8266/src/AmazonIOTClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/aws-sdk-arduino-esp8266/src/AWSClient2.h"
  "${CMAKE_CURRENT_LIST_DIR}/aws-sdk-arduino-esp8266/src/AWSClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/aws-sdk-arduino-esp8266/src/Utils.h"
  "${CMAKE_CURRENT_LIST_DIR}/aws-sdk-arduino-esp8266/src/AWSFoundationalTypes.h"
  "${CMAKE_CURRENT_LIST_DIR}/aws-sdk-arduino-esp8266/src/AmazonS3Client.h"
  "${CMAKE_CURRENT_LIST_DIR}/aws-sdk-arduino-esp8266/src/AmazonSNSClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/aws-sdk-arduino-esp8266/src/AWSClient4.h"
  "${CMAKE_CURRENT_LIST_DIR}/aws-sdk-arduino-esp8266/src/DeviceIndependentInterfaces.h"
  "${CMAKE_CURRENT_LIST_DIR}/aws-sdk-arduino-esp8266/src/sha256.h"
  "${CMAKE_CURRENT_LIST_DIR}/aws-sdk-arduino-esp8266/src/ESPAWSImplementations.h"
)

target_include_directories(aws-sdk-esp8266 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/aws-sdk-arduino-esp8266/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(aws-sdk-esp8266 INTERFACE
    arduino-compat
)
