add_library(pac-paunastepper INTERFACE)

target_sources(pac-paunastepper INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PaunaStepper/src/PaunaStepper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PaunaStepper/src/PaunaStepper.h"
)

target_include_directories(pac-paunastepper INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PaunaStepper/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-paunastepper INTERFACE
    arduino-compat
)
