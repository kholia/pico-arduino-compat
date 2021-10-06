add_library(lapx9c10x INTERFACE)

target_sources(lapx9c10x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LapX9C10X/src/LapX9C10X.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LapX9C10X/src/LapX9C10X.h"
)

target_include_directories(lapx9c10x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LapX9C10X/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(lapx9c10x INTERFACE
    arduino-compat
)
