add_library(pac-adafruit-tlc5947 INTERFACE)

target_sources(pac-adafruit-tlc5947 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TLC5947/Adafruit_TLC5947.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TLC5947/Adafruit_TLC5947.h"
)

target_include_directories(pac-adafruit-tlc5947 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TLC5947"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adafruit-tlc5947 INTERFACE
    arduino-compat
)
