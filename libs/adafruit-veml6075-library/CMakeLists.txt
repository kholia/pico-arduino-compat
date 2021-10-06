add_library(adafruit-veml6075-library INTERFACE)

target_sources(adafruit-veml6075-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VEML6075/Adafruit_VEML6075.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VEML6075/Adafruit_VEML6075.h"
)

target_include_directories(adafruit-veml6075-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VEML6075"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-veml6075-library INTERFACE
    arduino-compat
    adafruit-busio
)
