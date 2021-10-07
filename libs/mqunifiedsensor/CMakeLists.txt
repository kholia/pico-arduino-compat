add_library(pac-mqunifiedsensor INTERFACE)

target_sources(pac-mqunifiedsensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MQSensorsLib/src/MQUnifiedsensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQSensorsLib/src/MQUnifiedsensor.h"
)

target_include_directories(pac-mqunifiedsensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MQSensorsLib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mqunifiedsensor INTERFACE
    arduino-compat
)
