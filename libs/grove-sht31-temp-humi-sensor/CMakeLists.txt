add_library(grove-sht31-temp-humi-sensor INTERFACE)

target_sources(grove-sht31-temp-humi-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Grove_SHT31_Temp_Humi_Sensor/SHT31.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_SHT31_Temp_Humi_Sensor/SHT31.h"
)

target_include_directories(grove-sht31-temp-humi-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Grove_SHT31_Temp_Humi_Sensor"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(grove-sht31-temp-humi-sensor INTERFACE
    arduino-compat
)
