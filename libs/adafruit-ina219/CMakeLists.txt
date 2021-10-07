add_library(pac-adafruit-ina219 INTERFACE)

target_sources(pac-adafruit-ina219 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_INA219/Adafruit_INA219.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_INA219/Adafruit_INA219.h"
)

target_include_directories(pac-adafruit-ina219 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_INA219"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-ina219 INTERFACE
    arduino-compat
    pac-adafruit-busio
)
