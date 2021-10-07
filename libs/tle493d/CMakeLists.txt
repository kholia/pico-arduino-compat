add_library(pac-tle493d INTERFACE)

target_sources(pac-tle493d INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TLE493D-3DMagnetic-Sensor/src/Tle493d.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE493D-3DMagnetic-Sensor/src/Tle493d_w2b6.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE493D-3DMagnetic-Sensor/src/Tle493d_p2b6.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE493D-3DMagnetic-Sensor/src/Tle493d_a2b6.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE493D-3DMagnetic-Sensor/src/util/RegMask.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE493D-3DMagnetic-Sensor/src/util/BusInterface.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE493D-3DMagnetic-Sensor/src/Tle493d_w2b6.h"
  "${CMAKE_CURRENT_LIST_DIR}/TLE493D-3DMagnetic-Sensor/src/Tle493d.h"
  "${CMAKE_CURRENT_LIST_DIR}/TLE493D-3DMagnetic-Sensor/src/Tle493d_p2b6.h"
  "${CMAKE_CURRENT_LIST_DIR}/TLE493D-3DMagnetic-Sensor/src/Tle493d_a2b6.h"
  "${CMAKE_CURRENT_LIST_DIR}/TLE493D-3DMagnetic-Sensor/src/util/Tle493d_conf.h"
  "${CMAKE_CURRENT_LIST_DIR}/TLE493D-3DMagnetic-Sensor/src/util/BusInterface.h"
  "${CMAKE_CURRENT_LIST_DIR}/TLE493D-3DMagnetic-Sensor/src/util/BusInterface2.h"
  "${CMAKE_CURRENT_LIST_DIR}/TLE493D-3DMagnetic-Sensor/src/util/RegMask.h"
)

target_include_directories(pac-tle493d INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TLE493D-3DMagnetic-Sensor/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tle493d INTERFACE
    arduino-compat
)
