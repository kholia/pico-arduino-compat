add_library(pac-lsm6 INTERFACE)

target_sources(pac-lsm6 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/lsm6-arduino/LSM6.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lsm6-arduino/LSM6.h"
)

target_include_directories(pac-lsm6 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/lsm6-arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-lsm6 INTERFACE
    arduino-compat
)
