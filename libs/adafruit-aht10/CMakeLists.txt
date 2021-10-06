add_library(adafruit-aht10 INTERFACE)

target_sources(adafruit-aht10 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AHT10/Adafruit_AHTX0.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AHT10/Adafruit_AHTX0.h"
)

target_include_directories(adafruit-aht10 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AHT10"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-aht10 INTERFACE
    arduino-compat
    adafruit-busio
)
