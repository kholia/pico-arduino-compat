add_library(pac-sparkfun-i2c-mux-arduino-library INTERFACE)

target_sources(pac-sparkfun-i2c-mux-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_I2C_Mux_Arduino_Library/src/SparkFun_I2C_Mux_Arduino_Library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_I2C_Mux_Arduino_Library/src/SparkFun_I2C_Mux_Arduino_Library.h"
)

target_include_directories(pac-sparkfun-i2c-mux-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_I2C_Mux_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-i2c-mux-arduino-library INTERFACE
    arduino-compat
)
