add_library(pac-iridiumsbdi2c INTERFACE)

target_sources(pac-iridiumsbdi2c INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_IridiumSBD_I2C_Arduino_Library/src/IridiumSBD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_IridiumSBD_I2C_Arduino_Library/src/IridiumSBD.h"
)

target_include_directories(pac-iridiumsbdi2c INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_IridiumSBD_I2C_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-iridiumsbdi2c INTERFACE
    arduino-compat
)
