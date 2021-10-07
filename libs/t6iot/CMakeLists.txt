add_library(pac-t6iot INTERFACE)

target_sources(pac-t6iot INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/t6iot/src/t6iot.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/t6iot/src/t6iot.h"
  "${CMAKE_CURRENT_LIST_DIR}/t6iot/examples/mqttStatus/settings.h"
  "${CMAKE_CURRENT_LIST_DIR}/t6iot/examples/soilMoisture/settings.h"
  "${CMAKE_CURRENT_LIST_DIR}/t6iot/examples/mqttCommand/settings.h"
  "${CMAKE_CURRENT_LIST_DIR}/t6iot/examples/nodeMCU-SoilMoisture_ST-8563/settings.h"
)

target_include_directories(pac-t6iot INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/t6iot/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-t6iot INTERFACE
    arduino-compat
)
