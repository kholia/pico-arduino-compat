add_library(pac-adafruit-neopxl8 INTERFACE)

target_sources(pac-adafruit-neopxl8 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoPXL8/Adafruit_NeoPXL8.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoPXL8/Adafruit_NeoPXL8.h"
)

target_include_directories(pac-adafruit-neopxl8 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoPXL8"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adafruit-neopxl8 INTERFACE
    arduino-compat
)
