add_library(pac-tinystepper_28byj_48 INTERFACE)

target_sources(pac-tinystepper_28byj_48 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TinyStepper_28BYJ_48/src/TinyStepper_28BYJ_48.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyStepper_28BYJ_48/src/TinyStepper_28BYJ_48.h"
)

target_include_directories(pac-tinystepper_28byj_48 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TinyStepper_28BYJ_48/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tinystepper_28byj_48 INTERFACE
    arduino-compat
)
