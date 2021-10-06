add_library(the-iot-guru-integration INTERFACE)

target_sources(the-iot-guru-integration INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/theiotguru-arduino-library/src/IoTGuru.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/theiotguru-arduino-library/src/MqttClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/theiotguru-arduino-library/src/IoTGuru.h"
  "${CMAKE_CURRENT_LIST_DIR}/theiotguru-arduino-library/src/MqttClient.h"
)

target_include_directories(the-iot-guru-integration INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/theiotguru-arduino-library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(the-iot-guru-integration INTERFACE
    arduino-compat
)
