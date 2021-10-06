add_library(asynctimerlib INTERFACE)

target_sources(asynctimerlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-AsyncTimer/src/AsyncTimerLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-AsyncTimer/src/AsyncTimerLib.h"
)

target_include_directories(asynctimerlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-AsyncTimer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(asynctimerlib INTERFACE
    arduino-compat
)
