add_library(sparkfun-qwiic-scale-nau7802-arduino-library INTERFACE)

target_sources(sparkfun-qwiic-scale-nau7802-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Qwiic_Scale_NAU7802_Arduino_Library/src/SparkFun_Qwiic_Scale_NAU7802_Arduino_Library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Qwiic_Scale_NAU7802_Arduino_Library/src/SparkFun_Qwiic_Scale_NAU7802_Arduino_Library.h"
)

target_include_directories(sparkfun-qwiic-scale-nau7802-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Qwiic_Scale_NAU7802_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-qwiic-scale-nau7802-arduino-library INTERFACE
    arduino-compat
)
