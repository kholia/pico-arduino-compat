add_library(protothreads INTERFACE)

target_sources(protothreads INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-protothreads/src/pt.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-protothreads/src/protothreads.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-protothreads/src/lc-addrlabels.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-protothreads/src/pt-sem.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-protothreads/src/lc.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-protothreads/src/lc-switch.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-protothreads/src/pt-sleep.h"
)

target_include_directories(protothreads INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-protothreads/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(protothreads INTERFACE
    arduino-compat
)
