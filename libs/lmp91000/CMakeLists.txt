add_library(pac-lmp91000 INTERFACE)

target_sources(pac-lmp91000 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LMP91000/LMP91000.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LMP91000/LMP91000.h"
)

target_include_directories(pac-lmp91000 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LMP91000"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-lmp91000 INTERFACE
    arduino-compat
)
