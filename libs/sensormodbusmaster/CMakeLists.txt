add_library(sensormodbusmaster INTERFACE)

target_sources(sensormodbusmaster INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SensorModbusMaster/src/SensorModbusMaster.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SensorModbusMaster/src/SensorModbusMaster.h"
)

target_include_directories(sensormodbusmaster INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SensorModbusMaster/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sensormodbusmaster INTERFACE
    arduino-compat
)
