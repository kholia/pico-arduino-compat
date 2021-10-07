add_library(pac-cmmc-easy INTERFACE)

target_sources(pac-cmmc-easy INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CMMCEasy/extras/tmp/CMMCEasy/CMMCEasy.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CMMCEasy/src/CMMCEasy.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CMMCEasy/extras/tmp/CMMCEasy/CMMC_Blink.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/CMMCEasy/extras/tmp/CMMCEasy/CMMC_Interval.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/CMMCEasy/src/CMMC_Blink.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/CMMCEasy/src/CMMC_Interval.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/CMMCEasy/extras/tmp/CMMCEasy/CMMCEasy.h"
  "${CMAKE_CURRENT_LIST_DIR}/CMMCEasy/src/CMMCEasy.h"
)

target_include_directories(pac-cmmc-easy INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CMMCEasy/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-cmmc-easy INTERFACE
    arduino-compat
)
