add_library(pac-timerfa INTERFACE)

target_sources(pac-timerfa INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TimerFa/TimerFa.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TimerFa/TimerFa.h"
)

target_include_directories(pac-timerfa INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TimerFa"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-timerfa INTERFACE
    arduino-compat
)
