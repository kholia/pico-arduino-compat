add_library(pac-pvision INTERFACE)

target_sources(pac-pvision INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PVision/PVision.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PVision/PVision.h"
)

target_include_directories(pac-pvision INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PVision"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pvision INTERFACE
    arduino-compat
)
