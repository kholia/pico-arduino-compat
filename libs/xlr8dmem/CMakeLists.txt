add_library(pac-xlr8dmem INTERFACE)

target_sources(pac-xlr8dmem INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/XLR8DMem/src/XLR8DMem.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/XLR8DMem/src/XLR8DMem.h"
)

target_include_directories(pac-xlr8dmem INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/XLR8DMem/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-xlr8dmem INTERFACE
    arduino-compat
)
