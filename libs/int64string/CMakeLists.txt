add_library(int64string INTERFACE)

target_sources(int64string INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Int64String/src/Int64String.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Int64String/src/Int64String.h"
)

target_include_directories(int64string INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Int64String/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(int64string INTERFACE
    arduino-compat
)
