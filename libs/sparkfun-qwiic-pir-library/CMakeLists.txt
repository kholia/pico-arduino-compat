add_library(sparkfun-qwiic-pir-library INTERFACE)

target_sources(sparkfun-qwiic-pir-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Qwiic_PIR_Arduino_Library/src/SparkFun_Qwiic_PIR.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Qwiic_PIR_Arduino_Library/src/registers.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Qwiic_PIR_Arduino_Library/src/SparkFun_Qwiic_PIR.h"
)

target_include_directories(sparkfun-qwiic-pir-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Qwiic_PIR_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-qwiic-pir-library INTERFACE
    arduino-compat
)
