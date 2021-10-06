add_library(adafruit-trellis-library INTERFACE)

target_sources(adafruit-trellis-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Trellis_Library/Adafruit_Trellis.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Trellis_Library/Adafruit_Trellis.h"
)

target_include_directories(adafruit-trellis-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Trellis_Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(adafruit-trellis-library INTERFACE
    arduino-compat
)
