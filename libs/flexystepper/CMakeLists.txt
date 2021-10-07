add_library(pac-flexystepper INTERFACE)

target_sources(pac-flexystepper INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FlexyStepper/src/FlexyStepper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FlexyStepper/src/FlexyStepper.h"
)

target_include_directories(pac-flexystepper INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FlexyStepper/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-flexystepper INTERFACE
    arduino-compat
)
