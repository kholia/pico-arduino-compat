add_library(pac-adafruit-l3gd20-u INTERFACE)

target_sources(pac-adafruit-l3gd20-u INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_L3GD20_U/Adafruit_L3GD20_U.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_L3GD20_U/Adafruit_L3GD20.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_L3GD20_U/Adafruit_L3GD20_U.h"
)

target_include_directories(pac-adafruit-l3gd20-u INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_L3GD20_U"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adafruit-l3gd20-u INTERFACE
    arduino-compat
)
