add_library(streaming INTERFACE)

target_sources(streaming INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Streaming/src/Streaming.h"
)

target_include_directories(streaming INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Streaming/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(streaming INTERFACE
    arduino-compat
)
