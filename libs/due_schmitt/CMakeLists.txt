add_library(due_schmitt INTERFACE)

target_sources(due_schmitt INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DUE_Schmitt/src/DUE_schmitt.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DUE_Schmitt/src/DUE_schmitt.h"
)

target_include_directories(due_schmitt INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DUE_Schmitt/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(due_schmitt INTERFACE
    arduino-compat
)
