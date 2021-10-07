add_library(pac-grove-high-temperature-sensor INTERFACE)

target_sources(pac-grove-high-temperature-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Grove_HighTemp_Sensor/Hight_Temp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_HighTemp_Sensor/High_Temp.h"
)

target_include_directories(pac-grove-high-temperature-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Grove_HighTemp_Sensor"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-grove-high-temperature-sensor INTERFACE
    arduino-compat
)
