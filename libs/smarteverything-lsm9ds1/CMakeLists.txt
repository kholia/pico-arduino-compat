add_library(pac-smarteverything-lsm9ds1 INTERFACE)

target_sources(pac-smarteverything-lsm9ds1 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/sme-lsm9ds1-library/src/accelerometer/LSM9DS1.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/sme-lsm9ds1-library/src/LSM9DS1.h"
  "${CMAKE_CURRENT_LIST_DIR}/sme-lsm9ds1-library/src/accelerometer/LSM9DS1Reg.h"
)

target_include_directories(pac-smarteverything-lsm9ds1 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/sme-lsm9ds1-library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-smarteverything-lsm9ds1 INTERFACE
    arduino-compat
)
