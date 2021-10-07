add_library(pac-swrtc INTERFACE)

target_sources(pac-swrtc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/swRTC/swRTC.h"
  "${CMAKE_CURRENT_LIST_DIR}/swRTC/core_build_options.h"
)

target_include_directories(pac-swrtc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/swRTC"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-swrtc INTERFACE
    arduino-compat
)
