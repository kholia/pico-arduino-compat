add_library(pac-lsm303 INTERFACE)

target_sources(pac-lsm303 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/lsm303-arduino/LSM303.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lsm303-arduino/LSM303.h"
)

target_include_directories(pac-lsm303 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/lsm303-arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-lsm303 INTERFACE
    arduino-compat
)
