add_library(sectimer INTERFACE)

target_sources(sectimer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/secTimer/secTimer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/secTimer/secTimer.h"
  "${CMAKE_CURRENT_LIST_DIR}/secTimer/core_build_options.h"
)

target_include_directories(sectimer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/secTimer"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sectimer INTERFACE
    arduino-compat
)
