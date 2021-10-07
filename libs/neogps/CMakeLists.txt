add_library(pac-neogps INTERFACE)

target_sources(pac-neogps INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/NeoGPS/src/GPSTime.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NeoGPS/src/NeoTime.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NeoGPS/src/Streamers.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NeoGPS/src/NMEAGPS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NeoGPS/src/DMS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NeoGPS/src/Location.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NeoGPS/src/Garmin/GrmNMEA.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NeoGPS/src/ublox/ubxmsg.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NeoGPS/src/ublox/ubxNMEA.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NeoGPS/src/ublox/ubxGPS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NeoGPS/extras/configs/Speed/NMEAGPS_cfg.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoGPS/extras/configs/Speed/GPSfix_cfg.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoGPS/extras/configs/Speed/NeoGPS_cfg.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoGPS/extras/configs/Minimal/NMEAGPS_cfg.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoGPS/extras/configs/Minimal/GPSfix_cfg.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoGPS/extras/configs/Minimal/NeoGPS_cfg.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoGPS/extras/configs/Nominal/NMEAGPS_cfg.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoGPS/extras/configs/Nominal/GPSfix_cfg.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoGPS/extras/configs/Nominal/NeoGPS_cfg.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoGPS/extras/configs/PUBX/NMEAGPS_cfg.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoGPS/extras/configs/PUBX/GPSfix_cfg.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoGPS/extras/configs/PUBX/NeoGPS_cfg.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoGPS/extras/configs/DTL/NMEAGPS_cfg.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoGPS/extras/configs/DTL/GPSfix_cfg.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoGPS/extras/configs/DTL/NeoGPS_cfg.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoGPS/extras/configs/Full/NMEAGPS_cfg.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoGPS/extras/configs/Full/GPSfix_cfg.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoGPS/extras/configs/Full/NeoGPS_cfg.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoGPS/src/NeoTime.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoGPS/src/NMEAGPS.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoGPS/src/GPSport.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoGPS/src/Streamers.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoGPS/src/GPSfix.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoGPS/src/NMEAGPS_cfg.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoGPS/src/GPSfix_cfg.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoGPS/src/CosaCompat.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoGPS/src/NeoGPS_cfg.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoGPS/src/NMEAGPSprivate.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoGPS/src/Location.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoGPS/src/GPSTime.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoGPS/src/DMS.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoGPS/src/Garmin/PGRM_cfg.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoGPS/src/Garmin/GrmNMEA.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoGPS/src/ublox/ubxGPS.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoGPS/src/ublox/ubxmsg.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoGPS/src/ublox/PUBX_cfg.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoGPS/src/ublox/ubxNMEA.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoGPS/src/ublox/ubx_cfg.h"
)

target_include_directories(pac-neogps INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/NeoGPS/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-neogps INTERFACE
    arduino-compat
)
