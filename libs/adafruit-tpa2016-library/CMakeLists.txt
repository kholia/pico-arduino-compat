add_library(adafruit-tpa2016-library INTERFACE)

target_sources(adafruit-tpa2016-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-TPA2016-Library/Adafruit_TPA2016.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-TPA2016-Library/Adafruit_TPA2016.h"
)

target_include_directories(adafruit-tpa2016-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit-TPA2016-Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(adafruit-tpa2016-library INTERFACE
    arduino-compat
)
