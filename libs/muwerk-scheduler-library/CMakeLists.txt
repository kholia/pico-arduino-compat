add_library(pac-muwerk-scheduler-library INTERFACE)

target_sources(pac-muwerk-scheduler-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/muwerk/Examples/rp2040/src/rp2040.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/muwerk/Examples/minimal/src/mu_minimal.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/muwerk/Examples/console/src/mu_console.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/muwerk/Examples/mac-linux/muwerk-test.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/muwerk/filesystem.h"
  "${CMAKE_CURRENT_LIST_DIR}/muwerk/heartbeat.h"
  "${CMAKE_CURRENT_LIST_DIR}/muwerk/doctor.h"
  "${CMAKE_CURRENT_LIST_DIR}/muwerk/sensors.h"
  "${CMAKE_CURRENT_LIST_DIR}/muwerk/jsonfile.h"
  "${CMAKE_CURRENT_LIST_DIR}/muwerk/i2cdoctor.h"
  "${CMAKE_CURRENT_LIST_DIR}/muwerk/muwerk.h"
  "${CMAKE_CURRENT_LIST_DIR}/muwerk/scheduler.h"
  "${CMAKE_CURRENT_LIST_DIR}/muwerk/timeout.h"
  "${CMAKE_CURRENT_LIST_DIR}/muwerk/console.h"
)

target_include_directories(pac-muwerk-scheduler-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/muwerk"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-muwerk-scheduler-library INTERFACE
    arduino-compat
)
