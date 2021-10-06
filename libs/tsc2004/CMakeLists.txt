add_library(tsc2004 INTERFACE)

target_sources(tsc2004 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino_tsc2004/src/TSC2004.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_tsc2004/src/TSC2004.h"
)

target_include_directories(tsc2004 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino_tsc2004/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tsc2004 INTERFACE
    arduino-compat
)
