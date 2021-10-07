add_library(pac-int64string INTERFACE)

target_sources(pac-int64string INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Int64String/src/Int64String.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Int64String/src/Int64String.h"
)

target_include_directories(pac-int64string INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Int64String/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-int64string INTERFACE
    arduino-compat
)
