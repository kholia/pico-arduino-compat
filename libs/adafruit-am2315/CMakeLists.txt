add_library(adafruit-am2315 INTERFACE)

target_sources(adafruit-am2315 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AM2315/Adafruit_AM2315.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AM2315/Adafruit_AM2315.h"
)

target_include_directories(adafruit-am2315 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AM2315"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-am2315 INTERFACE
    arduino-compat
    adafruit-busio
)
