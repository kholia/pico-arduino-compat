add_library(pac-adafruit-tmp006 INTERFACE)

target_sources(pac-adafruit-tmp006 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TMP006/Adafruit_TMP006.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TMP006/Adafruit_TMP006.h"
)

target_include_directories(pac-adafruit-tmp006 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TMP006"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adafruit-tmp006 INTERFACE
    arduino-compat
)
