add_library(pac-stepper_28byj_48 INTERFACE)

target_sources(pac-stepper_28byj_48 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Stepper_28BYJ_48/src/Stepper_28BYJ_48.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Stepper_28BYJ_48/src/Stepper_28BYJ_48.h"
)

target_include_directories(pac-stepper_28byj_48 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Stepper_28BYJ_48/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-stepper_28byj_48 INTERFACE
    arduino-compat
)
