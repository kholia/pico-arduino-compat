add_library(pac-vma11 INTERFACE)

target_sources(pac-vma11 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/VMA11/Si4703_Breakout_Modified.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VMA11/VMA11.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VMA11/VMA11.h"
  "${CMAKE_CURRENT_LIST_DIR}/VMA11/Si4703_Breakout_Modified.h"
)

target_include_directories(pac-vma11 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/VMA11"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-vma11 INTERFACE
    arduino-compat
)
