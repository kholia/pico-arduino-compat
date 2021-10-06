add_library(octosonar INTERFACE)

target_sources(octosonar INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/OctoSonar/src/OctoSonar.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OctoSonar/src/OctoSonar.h"
)

target_include_directories(octosonar INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/OctoSonar/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(octosonar INTERFACE
    arduino-compat
)
