add_library(adafruit-ltr390-library INTERFACE)

target_sources(adafruit-ltr390-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LTR390/Adafruit_LTR390.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LTR390/Adafruit_LTR390.h"
)

target_include_directories(adafruit-ltr390-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LTR390"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-ltr390-library INTERFACE
    arduino-compat
    adafruit-busio
)
