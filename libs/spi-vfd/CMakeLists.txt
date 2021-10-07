add_library(pac-spi-vfd INTERFACE)

target_sources(pac-spi-vfd INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SPI_VFD/SPI_VFD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SPI_VFD/SPI_VFD.h"
)

target_include_directories(pac-spi-vfd INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SPI_VFD"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-spi-vfd INTERFACE
    arduino-compat
)
