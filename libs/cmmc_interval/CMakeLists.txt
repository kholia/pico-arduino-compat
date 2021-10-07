add_library(pac-cmmc_interval INTERFACE)

target_sources(pac-cmmc_interval INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CMMC_Interval/src/CMMC_Interval.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CMMC_Interval/src/CMMC_Interval.h"
)

target_include_directories(pac-cmmc_interval INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CMMC_Interval/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-cmmc_interval INTERFACE
    arduino-compat
)
