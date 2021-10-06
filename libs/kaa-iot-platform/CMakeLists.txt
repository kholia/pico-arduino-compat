add_library(kaa-iot-platform INTERFACE)

target_sources(kaa-iot-platform INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/kaa-arduino-sdk/kaa.h"
)

target_include_directories(kaa-iot-platform INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/kaa-arduino-sdk"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(kaa-iot-platform INTERFACE
    arduino-compat
)
