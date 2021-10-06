add_library(i2c-axp192-power-management INTERFACE)

target_sources(i2c-axp192-power-management INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/I2C_AXP192/src/I2C_AXP192.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/I2C_AXP192/src/I2C_AXP192.h"
)

target_include_directories(i2c-axp192-power-management INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/I2C_AXP192/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(i2c-axp192-power-management INTERFACE
    arduino-compat
)
