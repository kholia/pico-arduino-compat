add_library(pac-max44009-library INTERFACE)

target_sources(pac-max44009-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MAX44009/src/MAX44009.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MAX44009/src/MAX44009.h"
)

target_include_directories(pac-max44009-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MAX44009/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-max44009-library INTERFACE
    arduino-compat
)
