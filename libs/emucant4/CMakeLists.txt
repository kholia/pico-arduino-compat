add_library(emucant4 INTERFACE)

target_sources(emucant4 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EMUcanT4/src/EMUcanT4.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EMUcanT4/src/EMUcanT4.h"
)

target_include_directories(emucant4 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EMUcanT4/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(emucant4 INTERFACE
    arduino-compat
)
