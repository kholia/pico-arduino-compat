add_library(adafruit-icm20649 INTERFACE)

target_sources(adafruit-icm20649 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ICM20649/Adafruit_ICM20948.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ICM20649/Adafruit_ICM20X.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ICM20649/Adafruit_ICM20649.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ICM20649/Adafruit_ICM20X.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ICM20649/Adafruit_ICM20948.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ICM20649/Adafruit_ICM20649.h"
)

target_include_directories(adafruit-icm20649 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ICM20649"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-icm20649 INTERFACE
    arduino-compat
    adafruit-busio
)
