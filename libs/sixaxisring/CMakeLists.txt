add_library(pac-sixaxisring INTERFACE)

target_sources(pac-sixaxisring INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SixAxisRing/SixAxisRing.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SixAxisRing/SixAxisRing.h"
)

target_include_directories(pac-sixaxisring INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SixAxisRing"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sixaxisring INTERFACE
    arduino-compat
)
