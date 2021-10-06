add_library(adafruit-mma8451-library INTERFACE)

target_sources(adafruit-mma8451-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MMA8451_Library/Adafruit_MMA8451.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MMA8451_Library/Adafruit_MMA8451.h"
)

target_include_directories(adafruit-mma8451-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MMA8451_Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-mma8451-library INTERFACE
    arduino-compat
    adafruit-busio
)
