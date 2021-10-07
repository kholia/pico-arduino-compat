add_library(pac-sodaq_lsm303agr INTERFACE)

target_sources(pac-sodaq_lsm303agr INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Sodaq_LSM303AGR/src/Sodaq_LSM303AGR.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Sodaq_LSM303AGR/src/Sodaq_LSM303AGR.h"
)

target_include_directories(pac-sodaq_lsm303agr INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Sodaq_LSM303AGR/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sodaq_lsm303agr INTERFACE
    arduino-compat
)
