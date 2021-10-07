add_library(pac-aliyuniotsdk INTERFACE)

target_sources(pac-aliyuniotsdk INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-aliyun-iot-sdk/src/AliyunIoTSDK.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-aliyun-iot-sdk/src/AliyunIoTSDK.h"
)

target_include_directories(pac-aliyuniotsdk INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-aliyun-iot-sdk/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-aliyuniotsdk INTERFACE
    arduino-compat
)
