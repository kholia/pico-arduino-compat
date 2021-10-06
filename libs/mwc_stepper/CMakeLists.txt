add_library(mwc_stepper INTERFACE)

target_sources(mwc_stepper INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mwc_stepper/src/mwc_stepper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mwc_stepper/src/mwc_stepper.h"
)

target_include_directories(mwc_stepper INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mwc_stepper/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mwc_stepper INTERFACE
    arduino-compat
)
