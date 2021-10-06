add_library(s.port-sensor-library-for-frsky INTERFACE)

target_sources(s.port-sensor-library-for-frsky INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FrSky/Sensors/ECU/EcuSensor/src/Ecu_Fadec.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FrSky/Sensors/ECU/EcuSensor/src/Ecu_Jetronic.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FrSky/Sensors/GPS/src/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FrSky/Sensors/TinySensor/src/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FrSky/src/SimpleSPortSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FrSky/src/CustomSPortSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FrSky/src/SPortHub.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FrSky/Sensors/ECU/EcuSensor/src/Ecu_Jetronic.h"
  "${CMAKE_CURRENT_LIST_DIR}/FrSky/Sensors/ECU/EcuSensor/src/Ecu.h"
  "${CMAKE_CURRENT_LIST_DIR}/FrSky/Sensors/ECU/EcuSensor/src/Ecu_Fadec.h"
  "${CMAKE_CURRENT_LIST_DIR}/FrSky/src/CustomSPortSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/FrSky/src/SPortSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/FrSky/src/SimpleSPortSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/FrSky/src/SPort.h"
  "${CMAKE_CURRENT_LIST_DIR}/FrSky/src/SPortHub.h"
)

target_include_directories(s.port-sensor-library-for-frsky INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FrSky/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(s.port-sensor-library-for-frsky INTERFACE
    arduino-compat
)
