add_library(timerfa INTERFACE)

target_sources(timerfa INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TimerFa/TimerFa.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TimerFa/TimerFa.h"
)

target_include_directories(timerfa INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TimerFa"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(timerfa INTERFACE
    arduino-compat
)
