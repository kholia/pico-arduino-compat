add_library(pac-octosonar INTERFACE)

target_sources(pac-octosonar INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/OctoSonar/src/OctoSonar.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OctoSonar/src/OctoSonar.h"
)

target_include_directories(pac-octosonar INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/OctoSonar/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-octosonar INTERFACE
    arduino-compat
)
