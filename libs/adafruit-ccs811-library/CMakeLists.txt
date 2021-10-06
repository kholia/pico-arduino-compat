add_library(adafruit-ccs811-library INTERFACE)

target_sources(adafruit-ccs811-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_CCS811/Adafruit_CCS811.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_CCS811/Adafruit_CCS811.h"
)

target_include_directories(adafruit-ccs811-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_CCS811"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-ccs811-library INTERFACE
    arduino-compat
    adafruit-busio
)
