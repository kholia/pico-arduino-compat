add_library(pac-mrm-common INTERFACE)

target_sources(pac-mrm-common INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mrm-common/src/mrm-common.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-common/src/mrm-common.h"
)

target_include_directories(pac-mrm-common INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mrm-common/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mrm-common INTERFACE
    arduino-compat
)
