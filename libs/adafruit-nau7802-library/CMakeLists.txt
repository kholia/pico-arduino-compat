add_library(adafruit-nau7802-library INTERFACE)

target_sources(adafruit-nau7802-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NAU7802/Adafruit_NAU7802.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NAU7802/Adafruit_NAU7802.h"
)

target_include_directories(adafruit-nau7802-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NAU7802"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-nau7802-library INTERFACE
    arduino-compat
    adafruit-busio
)
