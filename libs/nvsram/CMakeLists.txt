add_library(pac-nvsram INTERFACE)

target_sources(pac-nvsram INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/NVSRAM/src/NVSRAM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NVSRAM/src/NVSRAM.h"
)

target_include_directories(pac-nvsram INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/NVSRAM/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-nvsram INTERFACE
    arduino-compat
)
