add_library(sharer INTERFACE)

target_sources(sharer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Sharer/src/Sharer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Sharer/src/SharerConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/Sharer/src/Sharer.h"
)

target_include_directories(sharer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Sharer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sharer INTERFACE
    arduino-compat
)
