add_library(countdownlib INTERFACE)

target_sources(countdownlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Countdown/src/CountdownLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Countdown/src/CountdownLib.h"
)

target_include_directories(countdownlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-Countdown/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(countdownlib INTERFACE
    arduino-compat
)
