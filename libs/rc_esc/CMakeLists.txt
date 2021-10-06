add_library(rc_esc INTERFACE)

target_sources(rc_esc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RC_ESC/src/ESC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RC_ESC/src/ESC.h"
)

target_include_directories(rc_esc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RC_ESC/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rc_esc INTERFACE
    arduino-compat
)
