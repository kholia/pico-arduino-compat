add_library(pac-mrmx-aw9523b INTERFACE)

target_sources(pac-mrmx-aw9523b INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AW9523B/src/AW9523B.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AW9523B/src/AW9523B.h"
)

target_include_directories(pac-mrmx-aw9523b INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AW9523B/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mrmx-aw9523b INTERFACE
    arduino-compat
)
