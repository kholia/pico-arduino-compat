add_library(xlr8rc INTERFACE)

target_sources(xlr8rc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/XLR8RC/src/XLR8RC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/XLR8RC/src/XLR8RC.h"
)

target_include_directories(xlr8rc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/XLR8RC/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(xlr8rc INTERFACE
    arduino-compat
)
