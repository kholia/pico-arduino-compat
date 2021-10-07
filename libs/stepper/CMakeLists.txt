add_library(pac-stepper INTERFACE)

target_sources(pac-stepper INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Stepper/src/Stepper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Stepper/src/Stepper.h"
)

target_include_directories(pac-stepper INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Stepper/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-stepper INTERFACE
    arduino-compat
)
