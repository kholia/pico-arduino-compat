add_library(spi-dac7611 INTERFACE)

target_sources(spi-dac7611 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SPI-DAC7611/src/SPI-DAC7611.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SPI-DAC7611/src/SPI-DAC7611.h"
)

target_include_directories(spi-dac7611 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SPI-DAC7611/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(spi-dac7611 INTERFACE
    arduino-compat
)
