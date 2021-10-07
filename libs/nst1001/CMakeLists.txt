add_library(pac-nst1001 INTERFACE)

target_sources(pac-nst1001 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/NST1001_Arduino-Driver/src/NST1001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NST1001_Arduino-Driver/src/NST1001.h"
)

target_include_directories(pac-nst1001 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/NST1001_Arduino-Driver/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-nst1001 INTERFACE
    arduino-compat
)
