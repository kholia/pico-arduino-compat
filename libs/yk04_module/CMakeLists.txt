add_library(yk04_module INTERFACE)

target_sources(yk04_module INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/YK04_Module/src/YK04_Module.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/YK04_Module/src/YK04_Module.h"
)

target_include_directories(yk04_module INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/YK04_Module/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(yk04_module INTERFACE
    arduino-compat
)
