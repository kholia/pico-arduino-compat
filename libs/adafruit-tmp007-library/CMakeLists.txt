add_library(adafruit-tmp007-library INTERFACE)

target_sources(adafruit-tmp007-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TMP007_Library/Adafruit_TMP007.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TMP007_Library/Adafruit_TMP007.h"
)

target_include_directories(adafruit-tmp007-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TMP007_Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-tmp007-library INTERFACE
    arduino-compat
    adafruit-busio
)
