add_library(pac-eduintro INTERFACE)

target_sources(pac-eduintro INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EduIntro/src/EduIntro.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EduIntro/src/LM35/LM35.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EduIntro/src/Relay/Relay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EduIntro/src/Potentiometer/Potentiometer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EduIntro/src/IMU/Motion.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EduIntro/src/ServoMotor/ServoMotor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EduIntro/src/Piezo/Piezo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EduIntro/src/Generic/AnalogInput2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EduIntro/src/Generic/DigitalInput.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EduIntro/src/Generic/Analoginput.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EduIntro/src/Generic/Output.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EduIntro/src/MosFet/MosFet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EduIntro/src/Thermistor/Thermistor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EduIntro/src/LED/LED.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EduIntro/src/DHT11/DHT11.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EduIntro/src/WiFiComm/WiFiComm.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EduIntro/src/LightSensor/LightSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EduIntro/src/PIR/PIR.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EduIntro/src/Button/Button.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EduIntro/src/EduIntro.h"
  "${CMAKE_CURRENT_LIST_DIR}/EduIntro/src/LM35/LM35.h"
  "${CMAKE_CURRENT_LIST_DIR}/EduIntro/src/Relay/Relay.h"
  "${CMAKE_CURRENT_LIST_DIR}/EduIntro/src/Potentiometer/Potentiometer.h"
  "${CMAKE_CURRENT_LIST_DIR}/EduIntro/src/IMU/Motion.h"
  "${CMAKE_CURRENT_LIST_DIR}/EduIntro/src/ServoMotor/ServoMotor.h"
  "${CMAKE_CURRENT_LIST_DIR}/EduIntro/src/Piezo/pitches.h"
  "${CMAKE_CURRENT_LIST_DIR}/EduIntro/src/Piezo/Piezo.h"
  "${CMAKE_CURRENT_LIST_DIR}/EduIntro/src/Generic/AnalogInput.h"
  "${CMAKE_CURRENT_LIST_DIR}/EduIntro/src/Generic/DigitalInput.h"
  "${CMAKE_CURRENT_LIST_DIR}/EduIntro/src/Generic/Output.h"
  "${CMAKE_CURRENT_LIST_DIR}/EduIntro/src/Generic/AnalogInput2.h"
  "${CMAKE_CURRENT_LIST_DIR}/EduIntro/src/MosFet/MosFet.h"
  "${CMAKE_CURRENT_LIST_DIR}/EduIntro/src/Thermistor/Thermistor.h"
  "${CMAKE_CURRENT_LIST_DIR}/EduIntro/src/LED/LED.h"
  "${CMAKE_CURRENT_LIST_DIR}/EduIntro/src/DHT11/DHT11.h"
  "${CMAKE_CURRENT_LIST_DIR}/EduIntro/src/WiFiComm/WiFiComm.h"
  "${CMAKE_CURRENT_LIST_DIR}/EduIntro/src/LightSensor/LightSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/EduIntro/src/PIR/PIR.h"
  "${CMAKE_CURRENT_LIST_DIR}/EduIntro/src/Button/Button.h"
)

target_include_directories(pac-eduintro INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EduIntro/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-eduintro INTERFACE
    arduino-compat
)
