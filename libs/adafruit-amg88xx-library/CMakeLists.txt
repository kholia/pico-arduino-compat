add_library(adafruit-amg88xx-library INTERFACE)

target_sources(adafruit-amg88xx-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AMG88xx/Adafruit_AMG88xx.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AMG88xx/examples/thermal_cam_interpolate/interpolation.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AMG88xx/Adafruit_AMG88xx.h"
)

target_include_directories(adafruit-amg88xx-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AMG88xx"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-amg88xx-library INTERFACE
    arduino-compat
    adafruit-busio
)
