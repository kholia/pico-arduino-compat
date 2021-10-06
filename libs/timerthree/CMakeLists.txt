add_library(timerthree INTERFACE)

target_sources(timerthree INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TimerThree/TimerThree.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TimerThree/TimerThree.h"
  "${CMAKE_CURRENT_LIST_DIR}/TimerThree/config/known_16bit_timers.h"
)

target_include_directories(timerthree INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TimerThree"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(timerthree INTERFACE
    arduino-compat
)
