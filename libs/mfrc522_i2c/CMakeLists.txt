add_library(pac-mfrc522_i2c INTERFACE)

target_sources(pac-mfrc522_i2c INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MFRC522_I2C/src/MFRC522_I2C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MFRC522_I2C/src/MFRC522_I2C.h"
)

target_include_directories(pac-mfrc522_i2c INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MFRC522_I2C/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mfrc522_i2c INTERFACE
    arduino-compat
)
