add_library(pac-cpptasks INTERFACE)

target_sources(pac-cpptasks INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/C-Tasks/extras/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/C-Tasks/src/tasks.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/C-Tasks/src/tasks.hpp"
)

target_include_directories(pac-cpptasks INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/C-Tasks/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-cpptasks INTERFACE
    arduino-compat
)
