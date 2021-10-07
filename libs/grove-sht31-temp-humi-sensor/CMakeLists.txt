add_library(pac-grove-sht31-temp-humi-sensor INTERFACE)

target_sources(pac-grove-sht31-temp-humi-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Grove_SHT31_Temp_Humi_Sensor/SHT31.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_SHT31_Temp_Humi_Sensor/SHT31.h"
)

target_include_directories(pac-grove-sht31-temp-humi-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Grove_SHT31_Temp_Humi_Sensor"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-grove-sht31-temp-humi-sensor INTERFACE
    arduino-compat
)
