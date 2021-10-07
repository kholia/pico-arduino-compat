add_library(pac-adafruit-dotstar INTERFACE)

target_sources(pac-adafruit-dotstar INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DotStar/Adafruit_DotStar.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DotStar/Adafruit_DotStar.h"
)

target_include_directories(pac-adafruit-dotstar INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DotStar"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adafruit-dotstar INTERFACE
    arduino-compat
)
