add_library(pac-adafruit-gps-library INTERFACE)

target_sources(pac-adafruit-gps-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_GPS/src/NMEA_data.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_GPS/src/Adafruit_GPS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_GPS/src/NMEA_parse.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_GPS/src/NMEA_build.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_GPS/src/NMEA_data.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_GPS/src/Adafruit_GPS.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_GPS/src/Adafruit_PMTK.h"
)

target_include_directories(pac-adafruit-gps-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_GPS/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adafruit-gps-library INTERFACE
    arduino-compat
)
