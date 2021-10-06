add_library(adafruit-zero-i2s-library INTERFACE)

target_sources(adafruit-zero-i2s-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ZeroI2S/Adafruit_ZeroI2S.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ZeroI2S/Adafruit_ZeroI2S.h"
)

target_include_directories(adafruit-zero-i2s-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ZeroI2S"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(adafruit-zero-i2s-library INTERFACE
    arduino-compat
)
