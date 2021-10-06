add_library(adafruit-lc709203f INTERFACE)

target_sources(adafruit-lc709203f INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LC709203F/Adafruit_LC709203F.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LC709203F/Adafruit_LC709203F.h"
)

target_include_directories(adafruit-lc709203f INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LC709203F"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-lc709203f INTERFACE
    arduino-compat
    adafruit-busio
)
