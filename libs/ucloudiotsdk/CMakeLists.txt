add_library(pac-ucloudiotsdk INTERFACE)

target_sources(pac-ucloudiotsdk INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ucloud-iot-sdk-arduino/src/UCloudIoTSDK.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ucloud-iot-sdk-arduino/src/UCloudIoTSDK.h"
)

target_include_directories(pac-ucloudiotsdk INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ucloud-iot-sdk-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ucloudiotsdk INTERFACE
    arduino-compat
)
