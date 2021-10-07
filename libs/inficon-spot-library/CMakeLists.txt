add_library(pac-inficon-spot-library INTERFACE)

target_sources(pac-inficon-spot-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/inficon-spot-lib/inficon_spot.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/inficon-spot-lib/inficon_spot.h"
)

target_include_directories(pac-inficon-spot-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/inficon-spot-lib"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-inficon-spot-library INTERFACE
    arduino-compat
)
