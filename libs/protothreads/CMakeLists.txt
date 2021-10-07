add_library(pac-protothreads INTERFACE)

target_sources(pac-protothreads INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-protothreads/src/pt.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-protothreads/src/protothreads.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-protothreads/src/lc-addrlabels.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-protothreads/src/pt-sem.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-protothreads/src/lc.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-protothreads/src/lc-switch.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-protothreads/src/pt-sleep.h"
)

target_include_directories(pac-protothreads INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-protothreads/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-protothreads INTERFACE
    arduino-compat
)
