add_library(pac-adafruit-si5351-library INTERFACE)

target_sources(pac-adafruit-si5351-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Si5351_Library/Adafruit_SI5351.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Si5351_Library/errors.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Si5351_Library/asserts.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Si5351_Library/Adafruit_SI5351.h"
)

target_include_directories(pac-adafruit-si5351-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Si5351_Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adafruit-si5351-library INTERFACE
    arduino-compat
)
