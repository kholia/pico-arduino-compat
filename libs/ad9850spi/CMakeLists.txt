add_library(ad9850spi INTERFACE)

target_sources(ad9850spi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AD9850SPI/AD9850SPI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AD9850SPI/AD9850SPI.h"
)

target_include_directories(ad9850spi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AD9850SPI"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ad9850spi INTERFACE
    arduino-compat
)
