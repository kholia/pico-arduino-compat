add_library(adafruit-ft6206-library INTERFACE)

target_sources(adafruit-ft6206-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_FT6206_Library/Adafruit_FT6206.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_FT6206_Library/Adafruit_FT6206.h"
)

target_include_directories(adafruit-ft6206-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_FT6206_Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(adafruit-ft6206-library INTERFACE
    arduino-compat
)
