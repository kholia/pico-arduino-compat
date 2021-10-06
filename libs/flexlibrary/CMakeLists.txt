add_library(flexlibrary INTERFACE)

target_sources(flexlibrary INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FlexLibrary/src/FlexLibrary.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FlexLibrary/src/FlexLibrary.h"
)

target_include_directories(flexlibrary INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FlexLibrary/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(flexlibrary INTERFACE
    arduino-compat
)
