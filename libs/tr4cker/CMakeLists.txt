add_library(tr4cker INTERFACE)

target_sources(tr4cker INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/tr4cker/src/Tr4cker.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/tr4cker/src/Tr4cker.h"
)

target_include_directories(tr4cker INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/tr4cker/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tr4cker INTERFACE
    arduino-compat
)
