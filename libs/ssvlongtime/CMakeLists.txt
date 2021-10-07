add_library(pac-ssvlongtime INTERFACE)

target_sources(pac-ssvlongtime INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SSVLongTime/SSVLongTime.h"
)

target_include_directories(pac-ssvlongtime INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SSVLongTime"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ssvlongtime INTERFACE
    arduino-compat
)
