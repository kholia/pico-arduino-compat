add_library(sixaxisring INTERFACE)

target_sources(sixaxisring INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SixAxisRing/SixAxisRing.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SixAxisRing/SixAxisRing.h"
)

target_include_directories(sixaxisring INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SixAxisRing"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sixaxisring INTERFACE
    arduino-compat
)
