add_library(mqunifiedsensor INTERFACE)

target_sources(mqunifiedsensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MQSensorsLib/src/MQUnifiedsensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQSensorsLib/src/MQUnifiedsensor.h"
)

target_include_directories(mqunifiedsensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MQSensorsLib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mqunifiedsensor INTERFACE
    arduino-compat
)
