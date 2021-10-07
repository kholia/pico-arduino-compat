add_library(pac-engineer-regulator INTERFACE)

target_sources(pac-engineer-regulator INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/src/Engineer_Regulator.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/src/Engineer_RegulatorEEPROM.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/src/Engineer_RegulatorEEPROM_ESP.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/src/Engineer_Regulator.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/src/Engineer_RegulatorEEPROM_AVR.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/examples/Regulator_ManualMode/Help.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/examples/Regulator_ManualMode/Sensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/examples/Regulator_ManualMode/Timers.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/examples/Regulator_ManualMode/Variables.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/examples/Regulator_Error/Help.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/examples/Regulator_Error/Sensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/examples/Regulator_Error/Timers.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/examples/Regulator_Error/Variables.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/examples/Regulator_Timers/Help.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/examples/Regulator_Timers/Sensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/examples/Regulator_Timers/Variables.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/examples/Regulator_Timers/data/Timers.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/examples/EEPROM/Arduino/ArduinoNano_Regulator_EEPROM_Single/Help.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/examples/EEPROM/Arduino/ArduinoNano_Regulator_EEPROM_Single/Sensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/examples/EEPROM/Arduino/ArduinoNano_Regulator_EEPROM_Single/Timers.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/examples/EEPROM/Arduino/ArduinoNano_Regulator_EEPROM_Single/Variables.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/examples/EEPROM/Arduino/ArduinoNano_Regulator_EEPROM_MultipleControls/Help.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/examples/EEPROM/Arduino/ArduinoNano_Regulator_EEPROM_MultipleControls/Sensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/examples/EEPROM/Arduino/ArduinoNano_Regulator_EEPROM_MultipleControls/Timers.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/examples/EEPROM/Arduino/ArduinoNano_Regulator_EEPROM_MultipleControls/Variables.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/examples/EEPROM/Arduino/ArduinoNano_Regulator_EEPROM_Single_Plotter/Help.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/examples/EEPROM/Arduino/ArduinoNano_Regulator_EEPROM_Single_Plotter/Sensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/examples/EEPROM/Arduino/ArduinoNano_Regulator_EEPROM_Single_Plotter/Timers.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/examples/EEPROM/Arduino/ArduinoNano_Regulator_EEPROM_Single_Plotter/Variables.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/examples/EEPROM/ESP8266/ESP8266_Regulator_EEPROM_Single_Plotter/Help.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/examples/EEPROM/ESP8266/ESP8266_Regulator_EEPROM_Single_Plotter/Sensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/examples/EEPROM/ESP8266/ESP8266_Regulator_EEPROM_Single_Plotter/Timers.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/examples/EEPROM/ESP8266/ESP8266_Regulator_EEPROM_Single_Plotter/Variables.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/examples/EEPROM/ESP8266/ESP8266_Regulator_EEPROM_Single/Help.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/examples/EEPROM/ESP8266/ESP8266_Regulator_EEPROM_Single/Sensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/examples/EEPROM/ESP8266/ESP8266_Regulator_EEPROM_Single/Timers.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/examples/EEPROM/ESP8266/ESP8266_Regulator_EEPROM_Single/Variables.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/examples/EEPROM/ESP8266/BlynkEasy_Reg_MultipleControls_fakeSensor/Help.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/examples/EEPROM/ESP8266/BlynkEasy_Reg_MultipleControls_fakeSensor/Sensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/examples/EEPROM/ESP8266/BlynkEasy_Reg_MultipleControls_fakeSensor/Variables.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/examples/EEPROM/ESP8266/BlynkEasy_Reg_MultipleControls_fakeSensor/Blynk.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/examples/EEPROM/ESP8266/BlynkEasy_Reg_MultipleControls_fakeSensor/data/Timers.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/examples/EEPROM/ESP8266/BlynkEasy_Reg_MultipleControls_fakeSensor/data/Connect.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/examples/EEPROM/ESP8266/ESP8266_Regulator_EEPROM_MultipleControls/Help.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/examples/EEPROM/ESP8266/ESP8266_Regulator_EEPROM_MultipleControls/Sensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/examples/EEPROM/ESP8266/ESP8266_Regulator_EEPROM_MultipleControls/Timers.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/examples/EEPROM/ESP8266/ESP8266_Regulator_EEPROM_MultipleControls/Variables.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/examples/EEPROM/ESP8266/BlynkFull_Reg_MultipleControls_fakeSensor/Help.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/examples/EEPROM/ESP8266/BlynkFull_Reg_MultipleControls_fakeSensor/Sensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/examples/EEPROM/ESP8266/BlynkFull_Reg_MultipleControls_fakeSensor/Variables.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/examples/EEPROM/ESP8266/BlynkFull_Reg_MultipleControls_fakeSensor/Blynk.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/examples/EEPROM/ESP8266/BlynkFull_Reg_MultipleControls_fakeSensor/data/Timers.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/examples/EEPROM/ESP8266/BlynkFull_Reg_MultipleControls_fakeSensor/data/Connect.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/examples/Regulator_Base/Help.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/examples/Regulator_Base/Sensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/examples/Regulator_Base/Timers.h"
  "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/examples/Regulator_Base/Variables.h"
)

target_include_directories(pac-engineer-regulator INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Engineer_Regulator/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-engineer-regulator INTERFACE
    arduino-compat
)
