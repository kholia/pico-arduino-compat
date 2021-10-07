add_library(pac-tsl2591mi INTERFACE)

target_sources(pac-tsl2591mi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/tsl2591mi/src/TSL2591MI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/tsl2591mi/src/TSL2591TwoWire.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/tsl2591mi/src/TSL2591I2C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/tsl2591mi/src/TSL2591MI.h"
  "${CMAKE_CURRENT_LIST_DIR}/tsl2591mi/src/TSL2591TwoWire.h"
  "${CMAKE_CURRENT_LIST_DIR}/tsl2591mi/src/TSL2591I2C.h"
)

target_include_directories(pac-tsl2591mi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/tsl2591mi/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tsl2591mi INTERFACE
    arduino-compat
)
