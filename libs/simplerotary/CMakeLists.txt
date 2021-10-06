add_library(simplerotary INTERFACE)

target_sources(simplerotary INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SimpleRotary/src/SimpleRotary.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleRotary/src/SimpleRotary.h"
)

target_include_directories(simplerotary INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SimpleRotary/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(simplerotary INTERFACE
    arduino-compat
)
