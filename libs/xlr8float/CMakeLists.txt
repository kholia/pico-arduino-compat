add_library(xlr8float INTERFACE)

target_sources(xlr8float INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/XLR8Float/XLR8Float.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/XLR8Float/XLR8Float.h"
)

target_include_directories(xlr8float INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/XLR8Float"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(xlr8float INTERFACE
    arduino-compat
)
