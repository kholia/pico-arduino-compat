add_library(mma8652 INTERFACE)

target_sources(mma8652 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mma8652/mma8652.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mma8652/mma8652.h"
  "${CMAKE_CURRENT_LIST_DIR}/mma8652/mma8652_regs.h"
)

target_include_directories(mma8652 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mma8652"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mma8652 INTERFACE
    arduino-compat
)
