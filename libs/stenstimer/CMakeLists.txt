add_library(pac-stenstimer INTERFACE)

target_sources(pac-stenstimer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/stens-timer/src/StensTimer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/stens-timer/src/timer/Timer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/stens-timer/examples/memberCallback/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/stens-timer/examples/memberCallback/MyClass.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/stens-timer/src/StensTimer.h"
  "${CMAKE_CURRENT_LIST_DIR}/stens-timer/src/IStensTimerListener.h"
  "${CMAKE_CURRENT_LIST_DIR}/stens-timer/src/timer/Timer.h"
  "${CMAKE_CURRENT_LIST_DIR}/stens-timer/examples/memberCallback/MyClass.h"
)

target_include_directories(pac-stenstimer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/stens-timer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-stenstimer INTERFACE
    arduino-compat
)
