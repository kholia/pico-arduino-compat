add_library(pac-easytask INTERFACE)

target_sources(pac-easytask INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Task/extra/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Task/src/EventManager.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Task/src/Task.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Task/src/Functions.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Task/extra/targetver.h"
  "${CMAKE_CURRENT_LIST_DIR}/Task/extra/WProgram.h"
  "${CMAKE_CURRENT_LIST_DIR}/Task/src/Functions.h"
  "${CMAKE_CURRENT_LIST_DIR}/Task/src/Task.h"
  "${CMAKE_CURRENT_LIST_DIR}/Task/src/EventManager.h"
  "${CMAKE_CURRENT_LIST_DIR}/Task/src/Event.h"
)

target_include_directories(pac-easytask INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Task/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-easytask INTERFACE
    arduino-compat
)
