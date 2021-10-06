add_library(adafruit-veml7700-library INTERFACE)

target_sources(adafruit-veml7700-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VEML7700/Adafruit_VEML7700.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VEML7700/Adafruit_VEML7700.h"
)

target_include_directories(adafruit-veml7700-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VEML7700"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-veml7700-library INTERFACE
    arduino-compat
    adafruit-busio
)
