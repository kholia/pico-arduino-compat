add_library(grove-sunlight-sensor INTERFACE)

target_sources(grove-sunlight-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Grove_Sunlight_Sensor/SI114X.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_Sunlight_Sensor/SI114X.h"
)

target_include_directories(grove-sunlight-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Grove_Sunlight_Sensor"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(grove-sunlight-sensor INTERFACE
    arduino-compat
)
