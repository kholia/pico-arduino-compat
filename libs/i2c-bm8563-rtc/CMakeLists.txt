add_library(i2c-bm8563-rtc INTERFACE)

target_sources(i2c-bm8563-rtc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/I2C_BM8563/src/I2C_BM8563.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/I2C_BM8563/src/I2C_BM8563.h"
)

target_include_directories(i2c-bm8563-rtc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/I2C_BM8563/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(i2c-bm8563-rtc INTERFACE
    arduino-compat
)
