add_library(pac-silvervest-oled-0010-spi INTERFACE)

target_sources(pac-silvervest-oled-0010-spi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Silvervest_OLED_0010_SPI/src/Silvervest_OLED_0010_SPI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Silvervest_OLED_0010_SPI/src/Silvervest_OLED_0010_SPI.h"
)

target_include_directories(pac-silvervest-oled-0010-spi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Silvervest_OLED_0010_SPI/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-silvervest-oled-0010-spi INTERFACE
    arduino-compat
)
