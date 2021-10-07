add_library(pac-adafruit-imagereader-library INTERFACE)

target_sources(pac-adafruit-imagereader-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ImageReader/Adafruit_ImageReader.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ImageReader/Adafruit_ImageReader_EPD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ImageReader/Adafruit_ImageReader_EPD.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ImageReader/Adafruit_ImageReader.h"
)

target_include_directories(pac-adafruit-imagereader-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ImageReader"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adafruit-imagereader-library INTERFACE
    arduino-compat
)
