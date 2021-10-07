add_library(pac-i2c-axp192-power-management INTERFACE)

target_sources(pac-i2c-axp192-power-management INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/I2C_AXP192/src/I2C_AXP192.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/I2C_AXP192/src/I2C_AXP192.h"
)

target_include_directories(pac-i2c-axp192-power-management INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/I2C_AXP192/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-i2c-axp192-power-management INTERFACE
    arduino-compat
)
