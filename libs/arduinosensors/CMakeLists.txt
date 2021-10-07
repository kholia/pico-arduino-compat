add_library(pac-arduinosensors INTERFACE)

target_sources(pac-arduinosensors INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoSensors/sensors/MPU/MPU9150.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoSensors/DigitalOut.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoSensors/ArduinoSensors.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoSensors/AnalogIn.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoSensors/DigitalIn.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoSensors/sensors/EZUltrasonicAnalog.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoSensors/sensors/SharpShort.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoSensors/sensors/CompoundDistanceSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoSensors/sensors/MLX90614.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoSensors/sensors/PingUltrasonic.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoSensors/sensors/MPUSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoSensors/sensors/SharpMedium.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoSensors/sensors/AnalogVoltage.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoSensors/sensors/HMC6352.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoSensors/sensors/SharpLong.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoSensors/sensors/SharpInterface.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoSensors/sensors/MPU/dmpMPU9150.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoSensors/sensors/MPU/helper_3dmath.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoSensors/sensors/MPU/dmpMPU6050.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoSensors/sensors/MPU/MPU9150.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoSensors/interfaces/VoltageInterface.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoSensors/interfaces/TemperatureInterface.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoSensors/interfaces/DistanceInterface.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoSensors/interfaces/AngleInterface.h"
)

target_include_directories(pac-arduinosensors INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoSensors"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduinosensors INTERFACE
    arduino-compat
)
