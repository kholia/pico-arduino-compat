add_library(embedded-type-c-pid INTERFACE)

target_sources(embedded-type-c-pid INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Embedded-PID/extras/testing/main.c"
  "${CMAKE_CURRENT_LIST_DIR}/Embedded-PID/extras/testing/test_lpf.c"
  "${CMAKE_CURRENT_LIST_DIR}/Embedded-PID/src/pid.c"
  "${CMAKE_CURRENT_LIST_DIR}/Embedded-PID/src/pid.h"
)

target_include_directories(embedded-type-c-pid INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Embedded-PID/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(embedded-type-c-pid INTERFACE
    arduino-compat
)
