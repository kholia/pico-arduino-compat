add_library(pac-mma8652 INTERFACE)

target_sources(pac-mma8652 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mma8652/mma8652.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mma8652/mma8652.h"
  "${CMAKE_CURRENT_LIST_DIR}/mma8652/mma8652_regs.h"
)

target_include_directories(pac-mma8652 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mma8652"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mma8652 INTERFACE
    arduino-compat
)
