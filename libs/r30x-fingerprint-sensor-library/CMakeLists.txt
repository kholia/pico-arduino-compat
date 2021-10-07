add_library(pac-r30x-fingerprint-sensor-library INTERFACE)

target_sources(pac-r30x-fingerprint-sensor-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/R30X-Fingerprint-Sensor-Library/src/R30X_FPS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/R30X-Fingerprint-Sensor-Library/src/R30X_FPS.h"
)

target_include_directories(pac-r30x-fingerprint-sensor-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/R30X-Fingerprint-Sensor-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-r30x-fingerprint-sensor-library INTERFACE
    arduino-compat
)
