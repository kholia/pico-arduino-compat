add_library(pac-emucant4 INTERFACE)

target_sources(pac-emucant4 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EMUcanT4/src/EMUcanT4.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EMUcanT4/src/EMUcanT4.h"
)

target_include_directories(pac-emucant4 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EMUcanT4/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-emucant4 INTERFACE
    arduino-compat
)
