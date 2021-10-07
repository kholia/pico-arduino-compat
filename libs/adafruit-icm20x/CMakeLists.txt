add_library(pac-adafruit-icm20x INTERFACE)

target_sources(pac-adafruit-icm20x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ICM20X/Adafruit_ICM20948.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ICM20X/Adafruit_ICM20X.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ICM20X/Adafruit_ICM20649.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ICM20X/Adafruit_ICM20X.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ICM20X/Adafruit_ICM20948.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ICM20X/Adafruit_ICM20649.h"
)

target_include_directories(pac-adafruit-icm20x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ICM20X"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-icm20x INTERFACE
    arduino-compat
    pac-adafruit-busio
)
