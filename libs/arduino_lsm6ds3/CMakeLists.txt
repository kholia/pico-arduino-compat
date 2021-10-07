add_library(pac-arduino_lsm6ds3 INTERFACE)

target_sources(pac-arduino_lsm6ds3 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_LSM6DS3/src/LSM6DS3.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_LSM6DS3/src/Arduino_LSM6DS3.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_LSM6DS3/src/LSM6DS3.h"
)

target_include_directories(pac-arduino_lsm6ds3 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino_LSM6DS3/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduino_lsm6ds3 INTERFACE
    arduino-compat
)
