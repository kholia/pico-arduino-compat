add_library(sodaq_ublox_gps INTERFACE)

target_sources(sodaq_ublox_gps INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Sodaq_UBlox_GPS/src/Sodaq_UBlox_GPS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Sodaq_UBlox_GPS/src/Sodaq_UBlox_GPS.h"
)

target_include_directories(sodaq_ublox_gps INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Sodaq_UBlox_GPS/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sodaq_ublox_gps INTERFACE
    arduino-compat
)
