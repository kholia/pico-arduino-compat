add_library(bmp180mi INTERFACE)

target_sources(bmp180mi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/bmp180mi/src/BMP180I2C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/bmp180mi/src/BMP180TwoWire.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/bmp180mi/src/BMP180MI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/bmp180mi/src/BMP180I2C.h"
  "${CMAKE_CURRENT_LIST_DIR}/bmp180mi/src/BMP180MI.h"
  "${CMAKE_CURRENT_LIST_DIR}/bmp180mi/src/BMP180TwoWire.h"
)

target_include_directories(bmp180mi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/bmp180mi/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(bmp180mi INTERFACE
    arduino-compat
)
