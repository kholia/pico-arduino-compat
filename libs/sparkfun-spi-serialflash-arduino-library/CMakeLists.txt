add_library(sparkfun-spi-serialflash-arduino-library INTERFACE)

target_sources(sparkfun-spi-serialflash-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_SPI_SerialFlash_Arduino_Library/src/SparkFun_SPI_SerialFlash.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_SPI_SerialFlash_Arduino_Library/src/SparkFun_SPI_SerialFlash.h"
)

target_include_directories(sparkfun-spi-serialflash-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_SPI_SerialFlash_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-spi-serialflash-arduino-library INTERFACE
    arduino-compat
)
