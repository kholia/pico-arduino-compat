add_library(tinyfox INTERFACE)

target_sources(tinyfox INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Tinyfox/TinySigfox.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Tinyfox/TinySigfox.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tinyfox/Tinyfox.h"
)

target_include_directories(tinyfox INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Tinyfox"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tinyfox INTERFACE
    arduino-compat
)
