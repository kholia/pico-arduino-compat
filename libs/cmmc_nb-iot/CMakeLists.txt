add_library(cmmc_nb-iot INTERFACE)

target_sources(cmmc_nb-iot INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CMMC_NB-IoT/src/CMMC_LED.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CMMC_NB-IoT/src/CMMC_NB_IoT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CMMC_NB-IoT/src/CMMC_Interval.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/CMMC_NB-IoT/src/CMMC_AT_Bridge.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/CMMC_NB-IoT/src/CMMC_NB_IoT.h"
  "${CMAKE_CURRENT_LIST_DIR}/CMMC_NB-IoT/src/HashMap.h"
  "${CMAKE_CURRENT_LIST_DIR}/CMMC_NB-IoT/src/CMMC_LED.h"
)

target_include_directories(cmmc_nb-iot INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CMMC_NB-IoT/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(cmmc_nb-iot INTERFACE
    arduino-compat
)
