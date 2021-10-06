add_library(mcci-fram-i2c INTERFACE)

target_sources(mcci-fram-i2c INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MCCI_FRAM_I2C/MCCI_FRAM_I2C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MCCI_FRAM_I2C/Adafruit_FRAM_I2C.h"
  "${CMAKE_CURRENT_LIST_DIR}/MCCI_FRAM_I2C/MCCI_FRAM_I2C.h"
)

target_include_directories(mcci-fram-i2c INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MCCI_FRAM_I2C"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mcci-fram-i2c INTERFACE
    arduino-compat
)
