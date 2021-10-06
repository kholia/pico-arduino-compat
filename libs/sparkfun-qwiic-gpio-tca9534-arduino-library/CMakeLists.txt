add_library(sparkfun-qwiic-gpio-tca9534-arduino-library INTERFACE)

target_sources(sparkfun-qwiic-gpio-tca9534-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Qwiic_GPIO_Library/src/SparkFun_TCA9534.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Qwiic_GPIO_Library/src/SparkFun_TCA9534.h"
)

target_include_directories(sparkfun-qwiic-gpio-tca9534-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Qwiic_GPIO_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-qwiic-gpio-tca9534-arduino-library INTERFACE
    arduino-compat
)
