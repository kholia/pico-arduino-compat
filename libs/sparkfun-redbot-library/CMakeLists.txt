add_library(sparkfun-redbot-library INTERFACE)

target_sources(sparkfun-redbot-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_RedBot_Arduino_Library/src/RedBotBumper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_RedBot_Arduino_Library/src/RedBotEncoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_RedBot_Arduino_Library/src/RedBotRadio.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_RedBot_Arduino_Library/src/RedBotSoftwareSerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_RedBot_Arduino_Library/src/RedBotAccel.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_RedBot_Arduino_Library/src/RedBot.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_RedBot_Arduino_Library/src/RedBotSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_RedBot_Arduino_Library/src/RedBotButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_RedBot_Arduino_Library/src/RedBotMotors.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_RedBot_Arduino_Library/src/RedBot.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_RedBot_Arduino_Library/src/RedBotSoftwareSerial.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_RedBot_Arduino_Library/examples/Exp4_2_Music/notes.h"
)

target_include_directories(sparkfun-redbot-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_RedBot_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-redbot-library INTERFACE
    arduino-compat
)
