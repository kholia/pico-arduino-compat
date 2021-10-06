add_library(adafruit-mpl115a2 INTERFACE)

target_sources(adafruit-mpl115a2 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MPL115A2/Adafruit_MPL115A2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MPL115A2/Adafruit_MPL115A2.h"
)

target_include_directories(adafruit-mpl115a2 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MPL115A2"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-mpl115a2 INTERFACE
    arduino-compat
    adafruit-busio
)
