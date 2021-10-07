add_library(pac-i2c-bm8563-rtc INTERFACE)

target_sources(pac-i2c-bm8563-rtc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/I2C_BM8563/src/I2C_BM8563.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/I2C_BM8563/src/I2C_BM8563.h"
)

target_include_directories(pac-i2c-bm8563-rtc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/I2C_BM8563/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-i2c-bm8563-rtc INTERFACE
    arduino-compat
)
