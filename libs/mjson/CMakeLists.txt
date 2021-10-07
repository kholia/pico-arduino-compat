add_library(pac-mjson INTERFACE)

target_sources(pac-mjson INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mjson/test/unit_test.c"
  "${CMAKE_CURRENT_LIST_DIR}/mjson/src/mjson.c"
  "${CMAKE_CURRENT_LIST_DIR}/mjson/src/mjson.h"
)

target_include_directories(pac-mjson INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mjson/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mjson INTERFACE
    arduino-compat
)
