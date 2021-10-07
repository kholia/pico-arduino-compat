add_library(pac-ssvntpcoreclass INTERFACE)

target_sources(pac-ssvntpcoreclass INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SSVNTPCoreClass/SSVNTPCore.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SSVNTPCoreClass/SSVNTPCore.h"
)

target_include_directories(pac-ssvntpcoreclass INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SSVNTPCoreClass"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ssvntpcoreclass INTERFACE
    arduino-compat
)
