add_library(pac-yasm INTERFACE)

target_sources(pac-yasm INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/yasm/src/yasm.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/yasm/src/btn.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/yasm/src/btn.h"
  "${CMAKE_CURRENT_LIST_DIR}/yasm/src/yasm.h"
)

target_include_directories(pac-yasm INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/yasm/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-yasm INTERFACE
    arduino-compat
)
