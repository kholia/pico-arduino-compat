add_library(xlr8lfsr INTERFACE)

target_sources(xlr8lfsr INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/XLR8LFSR/src/XLR8_LFSR.h"
)

target_include_directories(xlr8lfsr INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/XLR8LFSR/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(xlr8lfsr INTERFACE
    arduino-compat
)
