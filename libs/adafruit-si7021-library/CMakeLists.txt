add_library(adafruit-si7021-library INTERFACE)

target_sources(adafruit-si7021-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Si7021/Adafruit_Si7021.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Si7021/Adafruit_Si7021.h"
)

target_include_directories(adafruit-si7021-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Si7021"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(adafruit-si7021-library INTERFACE
    arduino-compat
)
