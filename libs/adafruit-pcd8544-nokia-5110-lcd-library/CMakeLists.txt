add_library(adafruit-pcd8544-nokia-5110-lcd-library INTERFACE)

target_sources(adafruit-pcd8544-nokia-5110-lcd-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-PCD8544-Nokia-5110-LCD-library/Adafruit_PCD8544.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-PCD8544-Nokia-5110-LCD-library/Adafruit_PCD8544.h"
)

target_include_directories(adafruit-pcd8544-nokia-5110-lcd-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit-PCD8544-Nokia-5110-LCD-library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_adafruit-gfx-library)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-pcd8544-nokia-5110-lcd-library INTERFACE
    arduino-compat
    adafruit-gfx-library
    adafruit-busio
)
