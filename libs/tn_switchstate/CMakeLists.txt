add_library(pac-tn_switchstate INTERFACE)

target_sources(pac-tn_switchstate INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TN_SwitchState/src/TN_SwitchState.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TN_SwitchState/src/TN_SwitchState.h"
)

target_include_directories(pac-tn_switchstate INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TN_SwitchState/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tn_switchstate INTERFACE
    arduino-compat
)
