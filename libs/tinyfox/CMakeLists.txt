add_library(pac-tinyfox INTERFACE)

target_sources(pac-tinyfox INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Tinyfox/TinySigfox.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Tinyfox/TinySigfox.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tinyfox/Tinyfox.h"
)

target_include_directories(pac-tinyfox INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Tinyfox"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tinyfox INTERFACE
    arduino-compat
)
