add_library(max541x INTERFACE)

target_sources(max541x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MAX541X/MAX541X.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MAX541X/MAX541X.h"
)

target_include_directories(max541x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MAX541X"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(max541x INTERFACE
    arduino-compat
)
