add_library(yasm INTERFACE)

target_sources(yasm INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/yasm/src/yasm.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/yasm/src/btn.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/yasm/src/btn.h"
  "${CMAKE_CURRENT_LIST_DIR}/yasm/src/yasm.h"
)

target_include_directories(yasm INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/yasm/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(yasm INTERFACE
    arduino-compat
)
