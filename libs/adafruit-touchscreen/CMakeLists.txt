add_library(pac-adafruit-touchscreen INTERFACE)

target_sources(pac-adafruit-touchscreen INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TouchScreen/TouchScreen.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TouchScreen/TouchScreen.h"
)

target_include_directories(pac-adafruit-touchscreen INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TouchScreen"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adafruit-touchscreen INTERFACE
    arduino-compat
)
