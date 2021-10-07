add_library(pac-firetimer INTERFACE)

target_sources(pac-firetimer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FireTimer/src/FireTimer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FireTimer/src/FireTimer.h"
)

target_include_directories(pac-firetimer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FireTimer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-firetimer INTERFACE
    arduino-compat
)
