add_library(nvsram INTERFACE)

target_sources(nvsram INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/NVSRAM/src/NVSRAM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NVSRAM/src/NVSRAM.h"
)

target_include_directories(nvsram INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/NVSRAM/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(nvsram INTERFACE
    arduino-compat
)
