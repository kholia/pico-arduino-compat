add_library(pac-sparkfun-acs37800-power-monitor-arduino-library INTERFACE)

target_sources(pac-sparkfun-acs37800-power-monitor-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ACS37800_Power_Monitor_Arduino_Library/src/SparkFun_ACS37800_Arduino_Library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ACS37800_Power_Monitor_Arduino_Library/src/SparkFun_ACS37800_Arduino_Library.h"
)

target_include_directories(pac-sparkfun-acs37800-power-monitor-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ACS37800_Power_Monitor_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-acs37800-power-monitor-arduino-library INTERFACE
    arduino-compat
)
