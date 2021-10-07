add_library(pac-supmeado7016 INTERFACE)

target_sources(pac-supmeado7016 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SupmeaDO7016/src/SupmeaDO7016.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SupmeaDO7016/src/SupmeaDO7016.h"
)

target_include_directories(pac-supmeado7016 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SupmeaDO7016/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-supmeado7016 INTERFACE
    arduino-compat
)
