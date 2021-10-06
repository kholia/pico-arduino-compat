add_library(delayexec INTERFACE)

target_sources(delayexec INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DelayExec/DelayExec.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DelayExec/DelayExec.h"
)

target_include_directories(delayexec INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DelayExec"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(delayexec INTERFACE
    arduino-compat
)
