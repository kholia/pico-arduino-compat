add_library(adafruit-ina219 INTERFACE)

target_sources(adafruit-ina219 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_INA219/Adafruit_INA219.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_INA219/Adafruit_INA219.h"
)

target_include_directories(adafruit-ina219 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_INA219"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-ina219 INTERFACE
    arduino-compat
    adafruit-busio
)
