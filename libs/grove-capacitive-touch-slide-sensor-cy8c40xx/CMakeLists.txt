add_library(pac-grove-capacitive-touch-slide-sensor-cy8c40xx INTERFACE)

target_sources(pac-grove-capacitive-touch-slide-sensor-cy8c40xx INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Grove_touch_sensor_CY8C40XX/Seeed_CY8C401XX.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_touch_sensor_CY8C40XX/Seeed_CY8C401XX.h"
)

target_include_directories(pac-grove-capacitive-touch-slide-sensor-cy8c40xx INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Grove_touch_sensor_CY8C40XX"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-grove-capacitive-touch-slide-sensor-cy8c40xx INTERFACE
    arduino-compat
)
