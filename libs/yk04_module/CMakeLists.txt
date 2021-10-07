add_library(pac-yk04_module INTERFACE)

target_sources(pac-yk04_module INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/YK04_Module/src/YK04_Module.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/YK04_Module/src/YK04_Module.h"
)

target_include_directories(pac-yk04_module INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/YK04_Module/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-yk04_module INTERFACE
    arduino-compat
)
