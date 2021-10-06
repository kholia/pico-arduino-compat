add_library(mrm-8x8a INTERFACE)

target_sources(mrm-8x8a INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mrm-8x8a/src/mrm-8x8a.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-8x8a/src/mrm-8x8a.h"
)

target_include_directories(mrm-8x8a INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mrm-8x8a/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mrm-8x8a INTERFACE
    arduino-compat
)
