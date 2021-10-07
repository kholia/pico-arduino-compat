add_library(pac-flexlibrary INTERFACE)

target_sources(pac-flexlibrary INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FlexLibrary/src/FlexLibrary.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FlexLibrary/src/FlexLibrary.h"
)

target_include_directories(pac-flexlibrary INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FlexLibrary/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-flexlibrary INTERFACE
    arduino-compat
)
