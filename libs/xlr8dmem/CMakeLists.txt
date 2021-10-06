add_library(xlr8dmem INTERFACE)

target_sources(xlr8dmem INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/XLR8DMem/src/XLR8DMem.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/XLR8DMem/src/XLR8DMem.h"
)

target_include_directories(xlr8dmem INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/XLR8DMem/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(xlr8dmem INTERFACE
    arduino-compat
)
