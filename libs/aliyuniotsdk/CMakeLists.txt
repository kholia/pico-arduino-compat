add_library(aliyuniotsdk INTERFACE)

target_sources(aliyuniotsdk INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-aliyun-iot-sdk/src/AliyunIoTSDK.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-aliyun-iot-sdk/src/AliyunIoTSDK.h"
)

target_include_directories(aliyuniotsdk INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-aliyun-iot-sdk/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(aliyuniotsdk INTERFACE
    arduino-compat
)
