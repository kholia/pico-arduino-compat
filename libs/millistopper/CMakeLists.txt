add_library(pac-millistopper INTERFACE)

target_sources(pac-millistopper INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MilliStopper/MilliStopper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MilliStopper/MilliStopper.h"
)

target_include_directories(pac-millistopper INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MilliStopper"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-millistopper INTERFACE
    arduino-compat
)
