add_library(halakekit INTERFACE)

target_sources(halakekit INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HaLakeKit-Library/src/HaLakeKit.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HaLakeKit-Library/src/HaLakeKit.h"
)

target_include_directories(halakekit INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HaLakeKit-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(halakekit INTERFACE
    arduino-compat
)
