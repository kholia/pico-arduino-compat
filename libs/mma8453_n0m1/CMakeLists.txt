add_library(mma8453_n0m1 INTERFACE)

target_sources(mma8453_n0m1 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MMA8453_n0m1/MMA8453_n0m1.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MMA8453_n0m1/MMA8453_n0m1.h"
)

target_include_directories(mma8453_n0m1 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MMA8453_n0m1"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mma8453_n0m1 INTERFACE
    arduino-compat
)
