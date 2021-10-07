add_library(pac-grove-i2c-high-accuracy-temp_humi-sensor-sht35 INTERFACE)

target_sources(pac-grove-i2c-high-accuracy-temp_humi-sensor-sht35 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_SHT35/Seeed_SHT35.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_SHT35/Seeed_SHT35.h"
)

target_include_directories(pac-grove-i2c-high-accuracy-temp_humi-sensor-sht35 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Seeed_SHT35"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-grove-i2c-high-accuracy-temp_humi-sensor-sht35 INTERFACE
    arduino-compat
)
