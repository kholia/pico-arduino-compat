add_library(pac-mrm-us-b INTERFACE)

target_sources(pac-mrm-us-b INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mrm-us-b/src/mrm-us-b.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-us-b/src/mrm-us-b.h"
)

target_include_directories(pac-mrm-us-b INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mrm-us-b/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mrm-us-b INTERFACE
    arduino-compat
)
