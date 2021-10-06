add_library(adafruit-htu31d-library INTERFACE)

target_sources(adafruit-htu31d-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_HTU31D/Adafruit_HTU31D.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_HTU31D/Adafruit_HTU31D.h"
)

target_include_directories(adafruit-htu31d-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_HTU31D"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-htu31d-library INTERFACE
    arduino-compat
    adafruit-busio
)
