add_library(grove-i2c-uv-sensor-veml6070 INTERFACE)

target_sources(grove-i2c-uv-sensor-veml6070 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_VEML6070/Seeed_VEML6070.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_VEML6070/Seeed_VEML6070.h"
)

target_include_directories(grove-i2c-uv-sensor-veml6070 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Seeed_VEML6070"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(grove-i2c-uv-sensor-veml6070 INTERFACE
    arduino-compat
)
