add_library(pvision INTERFACE)

target_sources(pvision INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PVision/PVision.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PVision/PVision.h"
)

target_include_directories(pvision INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PVision"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pvision INTERFACE
    arduino-compat
)
