add_library(adafruit-si4713-library INTERFACE)

target_sources(adafruit-si4713-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-Si4713-Library/Adafruit_Si4713.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-Si4713-Library/Adafruit_Si4713.h"
)

target_include_directories(adafruit-si4713-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit-Si4713-Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(adafruit-si4713-library INTERFACE
    arduino-compat
)
