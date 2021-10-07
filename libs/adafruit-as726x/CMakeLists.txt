add_library(pac-adafruit-as726x INTERFACE)

target_sources(pac-adafruit-as726x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AS726x/Adafruit_AS726x.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AS726x/Adafruit_AS726x.h"
)

target_include_directories(pac-adafruit-as726x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AS726x"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-as726x INTERFACE
    arduino-compat
    pac-adafruit-busio
)
