add_library(pac-melopero-lsm9ds1 INTERFACE)

target_sources(pac-melopero-lsm9ds1 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_LSM9DS1_Arduino_Library/src/Melopero_LSM9DS1.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_LSM9DS1_Arduino_Library/src/Melopero_LSM9DS1.h"
)

target_include_directories(pac-melopero-lsm9ds1 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Melopero_LSM9DS1_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-melopero-lsm9ds1 INTERFACE
    arduino-compat
)
