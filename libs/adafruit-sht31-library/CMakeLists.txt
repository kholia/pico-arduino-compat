add_library(adafruit-sht31-library INTERFACE)

target_sources(adafruit-sht31-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SHT31/Adafruit_SHT31.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SHT31/Adafruit_SHT31.h"
)

target_include_directories(adafruit-sht31-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SHT31"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-sht31-library INTERFACE
    arduino-compat
    adafruit-busio
)
