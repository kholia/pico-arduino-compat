add_library(adafruit-msa301 INTERFACE)

target_sources(adafruit-msa301 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MSA301/Adafruit_MSA301.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MSA301/Adafruit_MSA301.h"
)

target_include_directories(adafruit-msa301 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MSA301"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-msa301 INTERFACE
    arduino-compat
    adafruit-busio
)
