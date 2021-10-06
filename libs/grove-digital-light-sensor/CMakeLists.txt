add_library(grove-digital-light-sensor INTERFACE)

target_sources(grove-digital-light-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Grove_Digital_Light_Sensor/Digital_Light_ISL29035.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_Digital_Light_Sensor/Digital_Light_TSL2561.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_Digital_Light_Sensor/Digital_Light_ISL29035.h"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_Digital_Light_Sensor/Digital_Light_TSL2561.h"
)

target_include_directories(grove-digital-light-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Grove_Digital_Light_Sensor"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(grove-digital-light-sensor INTERFACE
    arduino-compat
)
