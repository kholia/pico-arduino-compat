add_library(adafruit-aw9523 INTERFACE)

target_sources(adafruit-aw9523 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AW9523/Adafruit_AW9523.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AW9523/Adafruit_AW9523.h"
)

target_include_directories(adafruit-aw9523 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AW9523"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-aw9523 INTERFACE
    arduino-compat
    adafruit-busio
)
