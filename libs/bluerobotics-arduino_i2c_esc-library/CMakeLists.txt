add_library(bluerobotics-arduino_i2c_esc-library INTERFACE)

target_sources(bluerobotics-arduino_i2c_esc-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_I2C_ESC/Arduino_I2C_ESC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_I2C_ESC/Arduino_I2C_ESC.h"
)

target_include_directories(bluerobotics-arduino_i2c_esc-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino_I2C_ESC"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(bluerobotics-arduino_i2c_esc-library INTERFACE
    arduino-compat
)
