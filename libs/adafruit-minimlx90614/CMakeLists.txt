add_library(adafruit-minimlx90614 INTERFACE)

target_sources(adafruit-minimlx90614 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MiniMLX90614/Adafruit_MiniMLX90614.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MiniMLX90614/Adafruit_MiniMLX90614.h"
)

target_include_directories(adafruit-minimlx90614 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MiniMLX90614"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(adafruit-minimlx90614 INTERFACE
    arduino-compat
)
