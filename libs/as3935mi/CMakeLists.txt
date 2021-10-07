add_library(pac-as3935mi INTERFACE)

target_sources(pac-as3935mi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/as3935mi/src/AS3935TwoWire.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/as3935mi/src/AS3935SPIClass.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/as3935mi/src/AS3935MI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/as3935mi/src/AS3935SPI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/as3935mi/src/AS3935I2C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/as3935mi/src/AS3935SPI.h"
  "${CMAKE_CURRENT_LIST_DIR}/as3935mi/src/AS3935MI.h"
  "${CMAKE_CURRENT_LIST_DIR}/as3935mi/src/AS3935I2C.h"
  "${CMAKE_CURRENT_LIST_DIR}/as3935mi/src/AS3935TwoWire.h"
  "${CMAKE_CURRENT_LIST_DIR}/as3935mi/src/AS3935SPIClass.h"
)

target_include_directories(pac-as3935mi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/as3935mi/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-as3935mi INTERFACE
    arduino-compat
)
