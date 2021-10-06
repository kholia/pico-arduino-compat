add_library(async_operations INTERFACE)

target_sources(async_operations INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Async_Operations/Async_Operations.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Async_Operations/Async_Operations.h"
)

target_include_directories(async_operations INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Async_Operations"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(async_operations INTERFACE
    arduino-compat
)
