add_library(pac-adafruit-mprls-library INTERFACE)

target_sources(pac-adafruit-mprls-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MPRLS/Adafruit_MPRLS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MPRLS/Adafruit_MPRLS.h"
)

target_include_directories(pac-adafruit-mprls-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MPRLS"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-mprls-library INTERFACE
    arduino-compat
    pac-adafruit-busio
)
