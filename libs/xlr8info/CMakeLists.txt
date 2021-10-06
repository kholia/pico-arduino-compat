add_library(xlr8info INTERFACE)

target_sources(xlr8info INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/XLR8Info/src/XLR8Info.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/XLR8Info/src/XLR8Info.h"
)

target_include_directories(xlr8info INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/XLR8Info/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(xlr8info INTERFACE
    arduino-compat
)
