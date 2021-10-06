add_library(jm_wire INTERFACE)

target_sources(jm_wire INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/jm_Wire/src/jm_Wire.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/jm_Wire/examples/jm_LiquidCrystal_I2C_demo/LCD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/jm_Wire/examples/jm_LiquidCrystal_I2C_demo/jm_LiquidCrystal_I2C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/jm_Wire/examples/jm_LiquidCrystal_I2C_demo/I2CIO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/jm_Wire/examples/jm_LiquidCrystal_I2C_demo/LiquidCrystal_I2C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/jm_Wire/src/utility/jm_twi.c"
  "${CMAKE_CURRENT_LIST_DIR}/jm_Wire/src/jm_Wire.h"
  "${CMAKE_CURRENT_LIST_DIR}/jm_Wire/src/utility/jm_twi.h"
  "${CMAKE_CURRENT_LIST_DIR}/jm_Wire/examples/jm_LiquidCrystal_I2C_demo/jm_LiquidCrystal_I2C.h"
  "${CMAKE_CURRENT_LIST_DIR}/jm_Wire/examples/jm_LiquidCrystal_I2C_demo/LCD.h"
  "${CMAKE_CURRENT_LIST_DIR}/jm_Wire/examples/jm_LiquidCrystal_I2C_demo/I2CIO.h"
  "${CMAKE_CURRENT_LIST_DIR}/jm_Wire/examples/jm_LiquidCrystal_I2C_demo/LiquidCrystal_I2C.h"
)

target_include_directories(jm_wire INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/jm_Wire/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(jm_wire INTERFACE
    arduino-compat
)
