add_library(pac-adafruit-zerotimer-library INTERFACE)

target_sources(pac-adafruit-zerotimer-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ZeroTimer/Adafruit_ZeroTimer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ZeroTimer/Adafruit_ZeroTimer.h"
)

target_include_directories(pac-adafruit-zerotimer-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ZeroTimer"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adafruit-zerotimer-library INTERFACE
    arduino-compat
)
