add_library(pac-ebtn INTERFACE)

target_sources(pac-ebtn INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/eBtn/eBtn.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/eBtn/src/eBtn.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/eBtn/eBtn.h"
  "${CMAKE_CURRENT_LIST_DIR}/eBtn/src/eBtn.h"
)

target_include_directories(pac-ebtn INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/eBtn/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ebtn INTERFACE
    arduino-compat
)
