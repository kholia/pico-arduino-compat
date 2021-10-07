add_library(pac-sunezy-mon INTERFACE)

target_sources(pac-sunezy-mon INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pv/inverter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pv/frame.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pv/status.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pv/status.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pv/frame.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pv/inverter.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pv/debug.h"
)

target_include_directories(pac-sunezy-mon INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-pv"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sunezy-mon INTERFACE
    arduino-compat
)
