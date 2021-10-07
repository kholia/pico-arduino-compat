add_library(pac-max541x INTERFACE)

target_sources(pac-max541x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MAX541X/MAX541X.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MAX541X/MAX541X.h"
)

target_include_directories(pac-max541x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MAX541X"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-max541x INTERFACE
    arduino-compat
)
