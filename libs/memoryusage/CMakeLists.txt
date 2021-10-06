add_library(memoryusage INTERFACE)

target_sources(memoryusage INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MemoryUsage/src/MemoryUsage.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MemoryUsage/src/MemoryUsage.h"
)

target_include_directories(memoryusage INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MemoryUsage/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(memoryusage INTERFACE
    arduino-compat
)
