add_library(bmx280mi INTERFACE)

target_sources(bmx280mi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/bmx280mi/src/BMx280I2C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/bmx280mi/src/BMx280MI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/bmx280mi/src/BMx280SPIClass.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/bmx280mi/src/BMx280SPI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/bmx280mi/src/BMx280TwoWire.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/bmx280mi/src/BMx280I2C.h"
  "${CMAKE_CURRENT_LIST_DIR}/bmx280mi/src/BMx280MI.h"
  "${CMAKE_CURRENT_LIST_DIR}/bmx280mi/src/BMx280SPIClass.h"
  "${CMAKE_CURRENT_LIST_DIR}/bmx280mi/src/BMx280TwoWire.h"
  "${CMAKE_CURRENT_LIST_DIR}/bmx280mi/src/BMx280SPI.h"
)

target_include_directories(bmx280mi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/bmx280mi/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(bmx280mi INTERFACE
    arduino-compat
)
