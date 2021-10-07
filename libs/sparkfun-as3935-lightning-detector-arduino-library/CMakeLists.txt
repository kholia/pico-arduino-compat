add_library(pac-sparkfun-as3935-lightning-detector-arduino-library INTERFACE)

target_sources(pac-sparkfun-as3935-lightning-detector-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_AS3935_Lightning_Detector_Arduino_Library/src/SparkFun_AS3935.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_AS3935_Lightning_Detector_Arduino_Library/src/SparkFun_AS3935.h"
)

target_include_directories(pac-sparkfun-as3935-lightning-detector-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_AS3935_Lightning_Detector_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-as3935-lightning-detector-arduino-library INTERFACE
    arduino-compat
)
