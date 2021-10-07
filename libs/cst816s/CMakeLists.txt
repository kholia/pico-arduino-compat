add_library(pac-cst816s INTERFACE)

target_sources(pac-cst816s INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CST816S/CST816S.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CST816S/CST816S.h"
)

target_include_directories(pac-cst816s INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CST816S"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-cst816s INTERFACE
    arduino-compat
)
