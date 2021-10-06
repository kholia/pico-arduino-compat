add_library(rakwireless-veml-light-sensor INTERFACE)

target_sources(rakwireless-veml-light-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RAK12010-VEML7700-Library/src/Light_VEML7700.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RAK12010-VEML7700-Library/src/Light_VEML7700.h"
)

target_include_directories(rakwireless-veml-light-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RAK12010-VEML7700-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(rakwireless-veml-light-sensor INTERFACE
    arduino-compat
    adafruit-busio
)
