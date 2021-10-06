add_library(adafruit-lps35hw INTERFACE)

target_sources(adafruit-lps35hw INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LPS35HW/Adafruit_LPS35HW.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LPS35HW/Adafruit_LPS35HW.h"
)

target_include_directories(adafruit-lps35hw INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LPS35HW"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-lps35hw INTERFACE
    arduino-compat
    adafruit-busio
)
