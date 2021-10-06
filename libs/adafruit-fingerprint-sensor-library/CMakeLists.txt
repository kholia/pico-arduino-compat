add_library(adafruit-fingerprint-sensor-library INTERFACE)

target_sources(adafruit-fingerprint-sensor-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-Fingerprint-Sensor-Library/Adafruit_Fingerprint.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-Fingerprint-Sensor-Library/Adafruit_Fingerprint.h"
)

target_include_directories(adafruit-fingerprint-sensor-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit-Fingerprint-Sensor-Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(adafruit-fingerprint-sensor-library INTERFACE
    arduino-compat
)
