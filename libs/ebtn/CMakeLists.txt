add_library(ebtn INTERFACE)

target_sources(ebtn INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/eBtn/eBtn.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/eBtn/src/eBtn.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/eBtn/eBtn.h"
  "${CMAKE_CURRENT_LIST_DIR}/eBtn/src/eBtn.h"
)

target_include_directories(ebtn INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/eBtn/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ebtn INTERFACE
    arduino-compat
)
