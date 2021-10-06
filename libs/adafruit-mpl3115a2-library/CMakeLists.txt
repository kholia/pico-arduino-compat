add_library(adafruit-mpl3115a2-library INTERFACE)

target_sources(adafruit-mpl3115a2-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MPL3115A2_Library/Adafruit_MPL3115A2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MPL3115A2_Library/Adafruit_MPL3115A2.h"
)

target_include_directories(adafruit-mpl3115a2-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MPL3115A2_Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-mpl3115a2-library INTERFACE
    arduino-compat
    adafruit-busio
)
