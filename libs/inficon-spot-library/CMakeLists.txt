add_library(inficon-spot-library INTERFACE)

target_sources(inficon-spot-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/inficon-spot-lib/inficon_spot.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/inficon-spot-lib/inficon_spot.h"
)

target_include_directories(inficon-spot-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/inficon-spot-lib"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(inficon-spot-library INTERFACE
    arduino-compat
)
