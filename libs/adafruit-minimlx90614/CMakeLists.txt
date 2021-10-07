add_library(pac-adafruit-minimlx90614 INTERFACE)

target_sources(pac-adafruit-minimlx90614 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MiniMLX90614/Adafruit_MiniMLX90614.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MiniMLX90614/Adafruit_MiniMLX90614.h"
)

target_include_directories(pac-adafruit-minimlx90614 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MiniMLX90614"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adafruit-minimlx90614 INTERFACE
    arduino-compat
)
