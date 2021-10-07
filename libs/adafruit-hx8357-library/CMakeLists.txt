add_library(pac-adafruit-hx8357-library INTERFACE)

target_sources(pac-adafruit-hx8357-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_HX8357_Library/Adafruit_HX8357.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_HX8357_Library/Adafruit_HX8357.h"
)

target_include_directories(pac-adafruit-hx8357-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_HX8357_Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adafruit-hx8357-library INTERFACE
    arduino-compat
)
