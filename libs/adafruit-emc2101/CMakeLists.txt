add_library(pac-adafruit-emc2101 INTERFACE)

target_sources(pac-adafruit-emc2101 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EMC2101/Adafruit_EMC2101.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EMC2101/Adafruit_EMC2101.h"
)

target_include_directories(pac-adafruit-emc2101 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EMC2101"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-emc2101 INTERFACE
    arduino-compat
    pac-adafruit-busio
)
