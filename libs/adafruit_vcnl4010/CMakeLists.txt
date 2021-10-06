add_library(adafruit_vcnl4010 INTERFACE)

target_sources(adafruit_vcnl4010 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VCNL4010/Adafruit_VCNL4010.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VCNL4010/Adafruit_VCNL4010.h"
)

target_include_directories(adafruit_vcnl4010 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VCNL4010"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit_vcnl4010 INTERFACE
    arduino-compat
    adafruit-busio
)
