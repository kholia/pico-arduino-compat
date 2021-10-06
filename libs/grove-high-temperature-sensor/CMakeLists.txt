add_library(grove-high-temperature-sensor INTERFACE)

target_sources(grove-high-temperature-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Grove_HighTemp_Sensor/Hight_Temp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_HighTemp_Sensor/High_Temp.h"
)

target_include_directories(grove-high-temperature-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Grove_HighTemp_Sensor"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(grove-high-temperature-sensor INTERFACE
    arduino-compat
)
