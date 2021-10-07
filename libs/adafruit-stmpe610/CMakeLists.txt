add_library(pac-adafruit-stmpe610 INTERFACE)

target_sources(pac-adafruit-stmpe610 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_STMPE610/Adafruit_STMPE610.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_STMPE610/Adafruit_STMPE610.h"
)

target_include_directories(pac-adafruit-stmpe610 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_STMPE610"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adafruit-stmpe610 INTERFACE
    arduino-compat
)
