add_library(pac-tlx4966-direction-speed-sensor INTERFACE)

target_sources(pac-tlx4966-direction-speed-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TLx4966-Direction-Speed-Sensor/src/TLx4966-ino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLx4966-Direction-Speed-Sensor/src/TLx4966/TLx4966.c"
  "${CMAKE_CURRENT_LIST_DIR}/TLx4966-Direction-Speed-Sensor/src/hw-platf/TLx4966-platf-ard.c"
  "${CMAKE_CURRENT_LIST_DIR}/TLx4966-Direction-Speed-Sensor/src/TLx4966-ino.h"
  "${CMAKE_CURRENT_LIST_DIR}/TLx4966-Direction-Speed-Sensor/src/TLx4966/TLx4966-types.h"
  "${CMAKE_CURRENT_LIST_DIR}/TLx4966-Direction-Speed-Sensor/src/TLx4966/TLx4966-hal.h"
  "${CMAKE_CURRENT_LIST_DIR}/TLx4966-Direction-Speed-Sensor/src/TLx4966/TLx4966.h"
  "${CMAKE_CURRENT_LIST_DIR}/TLx4966-Direction-Speed-Sensor/src/hw-platf/TLx4966-platf-ard.h"
)

target_include_directories(pac-tlx4966-direction-speed-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TLx4966-Direction-Speed-Sensor/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tlx4966-direction-speed-sensor INTERFACE
    arduino-compat
)
