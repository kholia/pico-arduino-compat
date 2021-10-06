add_library(ucloudiotsdk INTERFACE)

target_sources(ucloudiotsdk INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ucloud-iot-sdk-arduino/src/UCloudIoTSDK.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ucloud-iot-sdk-arduino/src/UCloudIoTSDK.h"
)

target_include_directories(ucloudiotsdk INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ucloud-iot-sdk-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ucloudiotsdk INTERFACE
    arduino-compat
)
