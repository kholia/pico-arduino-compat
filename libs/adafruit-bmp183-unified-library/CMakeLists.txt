add_library(pac-adafruit-bmp183-unified-library INTERFACE)

target_sources(pac-adafruit-bmp183-unified-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BMP183_Unified_Library/Adafruit_BMP183_U.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BMP183_Unified_Library/Adafruit_BMP183_U.h"
)

target_include_directories(pac-adafruit-bmp183-unified-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BMP183_Unified_Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adafruit-bmp183-unified-library INTERFACE
    arduino-compat
)
