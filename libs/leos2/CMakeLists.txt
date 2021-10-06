add_library(leos2 INTERFACE)

target_sources(leos2 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/leOS2/leOS2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/leOS2/leOS2.h"
)

target_include_directories(leos2 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/leOS2"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(leos2 INTERFACE
    arduino-compat
)
