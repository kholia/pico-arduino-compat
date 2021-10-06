add_library(arduino_lsm6dsox INTERFACE)

target_sources(arduino_lsm6dsox INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_LSM6DSOX/src/LSM6DSOX.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_LSM6DSOX/src/LSM6DSOX.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_LSM6DSOX/src/Arduino_LSM6DSOX.h"
)

target_include_directories(arduino_lsm6dsox INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino_LSM6DSOX/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arduino_lsm6dsox INTERFACE
    arduino-compat
)
