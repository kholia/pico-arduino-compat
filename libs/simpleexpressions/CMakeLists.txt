add_library(simpleexpressions INTERFACE)

target_sources(simpleexpressions INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SimpleExpressions/src/SimpleExpressions.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleExpressions/src/Sounds.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleExpressions/src/Shapes.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleExpressions/src/SimpleExpressions.h"
)

target_include_directories(simpleexpressions INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SimpleExpressions/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(simpleexpressions INTERFACE
    arduino-compat
)
