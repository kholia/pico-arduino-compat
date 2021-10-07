add_library(pac-cmmc_led INTERFACE)

target_sources(pac-cmmc_led INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CMMC_LED/src/CMMC_LED.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CMMC_LED/src/CMMC_LED.h"
)

target_include_directories(pac-cmmc_led INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CMMC_LED/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-cmmc_led INTERFACE
    arduino-compat
)
