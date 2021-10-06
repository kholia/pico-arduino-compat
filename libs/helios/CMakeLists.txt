add_library(helios INTERFACE)

target_sources(helios INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HeliOS/extras/contrib/QT_PeriodicTask/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HeliOS/extras/linux/main.c"
  "${CMAKE_CURRENT_LIST_DIR}/HeliOS/extras/windows/main.c"
  "${CMAKE_CURRENT_LIST_DIR}/HeliOS/src/HeliOS.c"
  "${CMAKE_CURRENT_LIST_DIR}/HeliOS/src/mem.c"
  "${CMAKE_CURRENT_LIST_DIR}/HeliOS/src/task.c"
  "${CMAKE_CURRENT_LIST_DIR}/HeliOS/src/list.c"
  "${CMAKE_CURRENT_LIST_DIR}/HeliOS/src/mem.h"
  "${CMAKE_CURRENT_LIST_DIR}/HeliOS/src/HeliOS.h"
  "${CMAKE_CURRENT_LIST_DIR}/HeliOS/src/HeliOS_Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/HeliOS/src/task.h"
  "${CMAKE_CURRENT_LIST_DIR}/HeliOS/src/list.h"
)

target_include_directories(helios INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HeliOS/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(helios INTERFACE
    arduino-compat
)
