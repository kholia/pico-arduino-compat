add_library(pac-adafruit-vcnl4040 INTERFACE)

target_sources(pac-adafruit-vcnl4040 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VCNL4040/Adafruit_VCNL4040.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VCNL4040/Adafruit_VCNL4040.h"
)

target_include_directories(pac-adafruit-vcnl4040 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VCNL4040"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-vcnl4040 INTERFACE
    arduino-compat
    pac-adafruit-busio
)
