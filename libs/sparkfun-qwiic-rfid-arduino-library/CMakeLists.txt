add_library(sparkfun-qwiic-rfid-arduino-library INTERFACE)

target_sources(sparkfun-qwiic-rfid-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Qwiic_RFID_Arduino_Library/src/SparkFun_Qwiic_Rfid.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Qwiic_RFID_Arduino_Library/src/SparkFun_Qwiic_Rfid.h"
)

target_include_directories(sparkfun-qwiic-rfid-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Qwiic_RFID_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-qwiic-rfid-arduino-library INTERFACE
    arduino-compat
)
