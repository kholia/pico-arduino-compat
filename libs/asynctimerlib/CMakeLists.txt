add_library(pac-asynctimerlib INTERFACE)

target_sources(pac-asynctimerlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-AsyncTimer/src/AsyncTimerLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-AsyncTimer/src/AsyncTimerLib.h"
)

target_include_directories(pac-asynctimerlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-AsyncTimer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-asynctimerlib INTERFACE
    arduino-compat
)
