add_library(tsic INTERFACE)

target_sources(tsic INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tsic/src/TSIC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tsic/src/TSIC.h"
)

target_include_directories(tsic INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-tsic/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tsic INTERFACE
    arduino-compat
)
