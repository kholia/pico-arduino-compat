add_library(adafruit-tla202x INTERFACE)

target_sources(adafruit-tla202x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TLA202x/Adafruit_TLA202x.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TLA202x/Adafruit_TLA202x.h"
)

target_include_directories(adafruit-tla202x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TLA202x"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-tla202x INTERFACE
    arduino-compat
    adafruit-busio
)
