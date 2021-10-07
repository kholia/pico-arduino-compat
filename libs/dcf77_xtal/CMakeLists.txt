add_library(pac-dcf77_xtal INTERFACE)

target_sources(pac-dcf77_xtal INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/dcf77/dcf77.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/dcf77/extras/standalone_debug_helper/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/dcf77/examples/DCF77_Scope/systick_hook.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/dcf77/dcf77.h"
  "${CMAKE_CURRENT_LIST_DIR}/dcf77/extras/standalone_debug_helper/main.h"
)

target_include_directories(pac-dcf77_xtal INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/dcf77"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dcf77_xtal INTERFACE
    arduino-compat
)
