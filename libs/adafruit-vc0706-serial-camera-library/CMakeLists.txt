add_library(adafruit-vc0706-serial-camera-library INTERFACE)

target_sources(adafruit-vc0706-serial-camera-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-VC0706-Serial-Camera-Library/Adafruit_VC0706.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-VC0706-Serial-Camera-Library/Adafruit_VC0706.h"
)

target_include_directories(adafruit-vc0706-serial-camera-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit-VC0706-Serial-Camera-Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(adafruit-vc0706-serial-camera-library INTERFACE
    arduino-compat
)
