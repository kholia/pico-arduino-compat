add_library(arduino-learning-board INTERFACE)

target_sources(arduino-learning-board INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLearningBoard-Lib/src/ALB_DHT11.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLearningBoard-Lib/src/ALB_Servo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLearningBoard-Lib/src/ALB_LCD_I2C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLearningBoard-Lib/src/ALB_I2Cdev.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLearningBoard-Lib/src/ALB_MPU6050.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLearningBoard-Lib/src/ALB_AccelStepper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLearningBoard-Lib/src/ALB_RFID.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLearningBoard-Lib/src/ALB_Time.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLearningBoard-Lib/src/ALB_SevSeg.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLearningBoard-Lib/src/ALB_I2C_Scan.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLearningBoard-Lib/src/ALB_DS1302RTC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLearningBoard-Lib/src/ALB_Wire.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLearningBoard-Lib/src/ALB_SPI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLearningBoard-Lib/src/ALB_twi.c"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLearningBoard-Lib/src/ALB_Servo.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLearningBoard-Lib/src/ALB_DHT11.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLearningBoard-Lib/src/ALB_LCD_I2C.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLearningBoard-Lib/src/ALB_Wire.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLearningBoard-Lib/src/ALB_twi.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLearningBoard-Lib/src/ALB_SevSeg.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLearningBoard-Lib/src/ALB_SPI.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLearningBoard-Lib/src/ALB_MPU6050.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLearningBoard-Lib/src/ALB_Time.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLearningBoard-Lib/src/ALB_DS1302RTC.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLearningBoard-Lib/src/ALB_helper_3dmath.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLearningBoard-Lib/src/ALB_RFID.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLearningBoard-Lib/src/ALB_I2C_Scan.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLearningBoard-Lib/src/ALB_AccelStepper.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLearningBoard-Lib/src/ALB_MPU6050_6Axis_MotionApps20.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLearningBoard-Lib/src/ALB_I2Cdev.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLearningBoard-Lib/src/ArduinoLearningBoard.h"
)

target_include_directories(arduino-learning-board INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoLearningBoard-Lib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arduino-learning-board INTERFACE
    arduino-compat
)
