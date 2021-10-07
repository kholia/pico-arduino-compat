add_library(pac-halfstepper INTERFACE)

target_sources(pac-halfstepper INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HalfStepper/HalfStepper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HalfStepper/HalfStepper.h"
)

target_include_directories(pac-halfstepper INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HalfStepper"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-halfstepper INTERFACE
    arduino-compat
)
