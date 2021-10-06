add_library(adafruit-dotstar INTERFACE)

target_sources(adafruit-dotstar INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DotStar/Adafruit_DotStar.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DotStar/Adafruit_DotStar.h"
)

target_include_directories(adafruit-dotstar INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DotStar"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(adafruit-dotstar INTERFACE
    arduino-compat
)
