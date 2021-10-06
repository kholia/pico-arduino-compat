add_library(mfrc522_i2c INTERFACE)

target_sources(mfrc522_i2c INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MFRC522_I2C/src/MFRC522_I2C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MFRC522_I2C/src/MFRC522_I2C.h"
)

target_include_directories(mfrc522_i2c INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MFRC522_I2C/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mfrc522_i2c INTERFACE
    arduino-compat
)
