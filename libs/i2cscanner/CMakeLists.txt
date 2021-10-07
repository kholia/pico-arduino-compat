add_library(pac-i2cscanner INTERFACE)

target_sources(pac-i2cscanner INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-I2CScanner/src/I2CScanner.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-I2CScanner/src/I2CScanner.h"
)

target_include_directories(pac-i2cscanner INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-I2CScanner/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-i2cscanner INTERFACE
    arduino-compat
)
