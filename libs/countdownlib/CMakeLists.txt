add_library(pac-countdownlib INTERFACE)

target_sources(pac-countdownlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Countdown/src/CountdownLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Countdown/src/CountdownLib.h"
)

target_include_directories(pac-countdownlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-Countdown/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-countdownlib INTERFACE
    arduino-compat
)
