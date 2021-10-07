add_library(pac-mwc_stepper INTERFACE)

target_sources(pac-mwc_stepper INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mwc_stepper/src/mwc_stepper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mwc_stepper/src/mwc_stepper.h"
)

target_include_directories(pac-mwc_stepper INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mwc_stepper/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mwc_stepper INTERFACE
    arduino-compat
)
