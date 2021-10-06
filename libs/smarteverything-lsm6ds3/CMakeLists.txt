add_library(smarteverything-lsm6ds3 INTERFACE)

target_sources(smarteverything-lsm6ds3 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/sme-lsm6ds3-library/src/accelerometer/LSM6DS3_Accelerometer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/sme-lsm6ds3-library/src/core/LSM6DS3.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/sme-lsm6ds3-library/src/gyroscope/LSM6DS3_Gyroscope.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/sme-lsm6ds3-library/src/LSM6DS3.h"
  "${CMAKE_CURRENT_LIST_DIR}/sme-lsm6ds3-library/src/core/LSM6DS3Reg.h"
)

target_include_directories(smarteverything-lsm6ds3 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/sme-lsm6ds3-library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(smarteverything-lsm6ds3 INTERFACE
    arduino-compat
)
