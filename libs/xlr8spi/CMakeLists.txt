add_library(pac-xlr8spi INTERFACE)

target_sources(pac-xlr8spi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/XLR8SPI/src/XLR8SPI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/XLR8SPI/src/XLR8SPI.h"
)

target_include_directories(pac-xlr8spi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/XLR8SPI/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-xlr8spi INTERFACE
    arduino-compat
)
