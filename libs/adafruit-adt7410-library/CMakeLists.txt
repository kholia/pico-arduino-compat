add_library(adafruit-adt7410-library INTERFACE)

target_sources(adafruit-adt7410-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ADT7410/Adafruit_ADT7410.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ADT7410/Adafruit_ADT7410.h"
)

target_include_directories(adafruit-adt7410-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ADT7410"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-adt7410-library INTERFACE
    arduino-compat
    adafruit-busio
)
