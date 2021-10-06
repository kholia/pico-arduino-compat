add_library(adafruit-mprls-library INTERFACE)

target_sources(adafruit-mprls-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MPRLS/Adafruit_MPRLS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MPRLS/Adafruit_MPRLS.h"
)

target_include_directories(adafruit-mprls-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MPRLS"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-mprls-library INTERFACE
    arduino-compat
    adafruit-busio
)
