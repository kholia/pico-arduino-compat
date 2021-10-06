add_library(xlr8spi INTERFACE)

target_sources(xlr8spi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/XLR8SPI/src/XLR8SPI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/XLR8SPI/src/XLR8SPI.h"
)

target_include_directories(xlr8spi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/XLR8SPI/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(xlr8spi INTERFACE
    arduino-compat
)
