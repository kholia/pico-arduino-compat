add_library(pac-sparkfun-touchinput-arduino-library INTERFACE)

target_sources(pac-sparkfun-touchinput-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TouchInput_Arduino_Library/src/SparkFun_TouchInput.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TouchInput_Arduino_Library/src/util/SparkFun_TouchRecord.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TouchInput_Arduino_Library/src/util/SparkFun_TouchElement.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TouchInput_Arduino_Library/src/util/SparkFun_TouchDriver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TouchInput_Arduino_Library/examples/Example99_DemoCode/colorwheel.c"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TouchInput_Arduino_Library/src/SparkFun_TouchInput.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TouchInput_Arduino_Library/src/util/SparkFun_2DRayTracing.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TouchInput_Arduino_Library/src/util/SparkFun_TouchRecord.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TouchInput_Arduino_Library/src/util/SparkFun_TouchTypes.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TouchInput_Arduino_Library/src/util/SparkFun_TouchElement.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TouchInput_Arduino_Library/src/util/SparkFun_TouchDriver.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TouchInput_Arduino_Library/examples/Example99_DemoCode/gimpbitmap.h"
)

target_include_directories(pac-sparkfun-touchinput-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TouchInput_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-touchinput-arduino-library INTERFACE
    arduino-compat
)
