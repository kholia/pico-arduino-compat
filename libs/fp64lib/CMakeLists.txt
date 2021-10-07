add_library(pac-fp64lib INTERFACE)

target_sources(pac-fp64lib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/fp64lib/avr_fp64.h"
  "${CMAKE_CURRENT_LIST_DIR}/fp64lib/asmdef.h"
  "${CMAKE_CURRENT_LIST_DIR}/fp64lib/fp64def.h"
  "${CMAKE_CURRENT_LIST_DIR}/fp64lib/fp64_math.h"
  "${CMAKE_CURRENT_LIST_DIR}/fp64lib/fp64lib.h"
  "${CMAKE_CURRENT_LIST_DIR}/fp64lib/fp64debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/fp64lib/sectionname.h"
)

target_include_directories(pac-fp64lib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/fp64lib"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-fp64lib INTERFACE
    arduino-compat
)
