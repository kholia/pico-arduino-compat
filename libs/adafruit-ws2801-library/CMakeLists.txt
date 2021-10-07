add_library(pac-adafruit-ws2801-library INTERFACE)

target_sources(pac-adafruit-ws2801-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-WS2801-Library/Adafruit_WS2801.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-WS2801-Library/Adafruit_WS2801.h"
)

target_include_directories(pac-adafruit-ws2801-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit-WS2801-Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adafruit-ws2801-library INTERFACE
    arduino-compat
)
