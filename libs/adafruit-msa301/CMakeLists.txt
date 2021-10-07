add_library(pac-adafruit-msa301 INTERFACE)

target_sources(pac-adafruit-msa301 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MSA301/Adafruit_MSA301.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MSA301/Adafruit_MSA301.h"
)

target_include_directories(pac-adafruit-msa301 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MSA301"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-msa301 INTERFACE
    arduino-compat
    pac-adafruit-busio
)
