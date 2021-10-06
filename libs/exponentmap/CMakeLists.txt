add_library(exponentmap INTERFACE)

target_sources(exponentmap INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ExponentMap/src/ExponentMap.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ExponentMap/src/ExponentMap.h"
)

target_include_directories(exponentmap INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ExponentMap/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(exponentmap INTERFACE
    arduino-compat
)
