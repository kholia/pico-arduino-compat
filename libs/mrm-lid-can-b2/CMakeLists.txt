add_library(pac-mrm-lid-can-b2 INTERFACE)

target_sources(pac-mrm-lid-can-b2 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mrm-lid-can-b2/src/mrm-lid-can-b2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-lid-can-b2/src/mrm-lid-can-b2.h"
)

target_include_directories(pac-mrm-lid-can-b2 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mrm-lid-can-b2/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mrm-lid-can-b2 INTERFACE
    arduino-compat
)
