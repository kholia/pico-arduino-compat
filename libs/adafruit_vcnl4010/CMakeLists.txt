add_library(pac-adafruit_vcnl4010 INTERFACE)

target_sources(pac-adafruit_vcnl4010 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VCNL4010/Adafruit_VCNL4010.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VCNL4010/Adafruit_VCNL4010.h"
)

target_include_directories(pac-adafruit_vcnl4010 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VCNL4010"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit_vcnl4010 INTERFACE
    arduino-compat
    pac-adafruit-busio
)
