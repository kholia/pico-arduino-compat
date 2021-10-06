add_library(cst816s INTERFACE)

target_sources(cst816s INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CST816S/CST816S.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CST816S/CST816S.h"
)

target_include_directories(cst816s INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CST816S"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(cst816s INTERFACE
    arduino-compat
)
