add_library(adafruit-sht4x-library INTERFACE)

target_sources(adafruit-sht4x-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SHT4X/Adafruit_SHT4x.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SHT4X/Adafruit_SHT4x.h"
)

target_include_directories(adafruit-sht4x-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SHT4X"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-sht4x-library INTERFACE
    arduino-compat
    adafruit-busio
)
