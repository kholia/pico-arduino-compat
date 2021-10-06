add_library(millistimer INTERFACE)

target_sources(millistimer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MillisTimer/MillisTimer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MillisTimer/MillisTimer.h"
)

target_include_directories(millistimer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MillisTimer"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(millistimer INTERFACE
    arduino-compat
)
