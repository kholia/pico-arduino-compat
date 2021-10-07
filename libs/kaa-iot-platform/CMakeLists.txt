add_library(pac-kaa-iot-platform INTERFACE)

target_sources(pac-kaa-iot-platform INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/kaa-arduino-sdk/kaa.h"
)

target_include_directories(pac-kaa-iot-platform INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/kaa-arduino-sdk"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-kaa-iot-platform INTERFACE
    arduino-compat
)
