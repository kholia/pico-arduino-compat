add_library(adafruit-fram-spi INTERFACE)

target_sources(adafruit-fram-spi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_FRAM_SPI/Adafruit_FRAM_SPI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_FRAM_SPI/Adafruit_FRAM_SPI.h"
)

target_include_directories(adafruit-fram-spi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_FRAM_SPI"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-fram-spi INTERFACE
    arduino-compat
    adafruit-busio
)
