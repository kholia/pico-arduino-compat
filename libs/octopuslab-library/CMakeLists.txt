add_library(pac-octopuslab-library INTERFACE)

target_sources(pac-octopuslab-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/OctopusLab-Library/octopuslibrary.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OctopusLab-Library/octopuslibrary.h"
)

target_include_directories(pac-octopuslab-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/OctopusLab-Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-octopuslab-library INTERFACE
    arduino-compat
)
