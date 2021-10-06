add_library(adafruit-ina260-library INTERFACE)

target_sources(adafruit-ina260-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_INA260/Adafruit_INA260.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_INA260/Adafruit_INA260.h"
)

target_include_directories(adafruit-ina260-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_INA260"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-ina260-library INTERFACE
    arduino-compat
    adafruit-busio
)
