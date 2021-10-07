add_library(pac-cheapstepper INTERFACE)

target_sources(pac-cheapstepper INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CheapStepper/CheapStepper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CheapStepper/CheapStepper.h"
)

target_include_directories(pac-cheapstepper INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CheapStepper"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-cheapstepper INTERFACE
    arduino-compat
)
