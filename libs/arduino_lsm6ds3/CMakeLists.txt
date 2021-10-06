add_library(arduino_lsm6ds3 INTERFACE)

target_sources(arduino_lsm6ds3 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_LSM6DS3/src/LSM6DS3.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_LSM6DS3/src/Arduino_LSM6DS3.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_LSM6DS3/src/LSM6DS3.h"
)

target_include_directories(arduino_lsm6ds3 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino_LSM6DS3/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arduino_lsm6ds3 INTERFACE
    arduino-compat
)
