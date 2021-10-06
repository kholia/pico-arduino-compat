add_library(paunastepper INTERFACE)

target_sources(paunastepper INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PaunaStepper/src/PaunaStepper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PaunaStepper/src/PaunaStepper.h"
)

target_include_directories(paunastepper INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PaunaStepper/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(paunastepper INTERFACE
    arduino-compat
)
