add_library(pac-adafruit-pcd8544-nokia-5110-lcd-library INTERFACE)

target_sources(pac-adafruit-pcd8544-nokia-5110-lcd-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-PCD8544-Nokia-5110-LCD-library/Adafruit_PCD8544.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-PCD8544-Nokia-5110-LCD-library/Adafruit_PCD8544.h"
)

target_include_directories(pac-adafruit-pcd8544-nokia-5110-lcd-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit-PCD8544-Nokia-5110-LCD-library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_pac-adafruit-gfx-library)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-pcd8544-nokia-5110-lcd-library INTERFACE
    arduino-compat
    pac-adafruit-gfx-library
    pac-adafruit-busio
)
