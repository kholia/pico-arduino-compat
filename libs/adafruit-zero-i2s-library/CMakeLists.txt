add_library(pac-adafruit-zero-i2s-library INTERFACE)

target_sources(pac-adafruit-zero-i2s-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ZeroI2S/Adafruit_ZeroI2S.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ZeroI2S/Adafruit_ZeroI2S.h"
)

target_include_directories(pac-adafruit-zero-i2s-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ZeroI2S"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adafruit-zero-i2s-library INTERFACE
    arduino-compat
)
