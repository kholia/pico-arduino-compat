add_library(bh1730 INTERFACE)

target_sources(bh1730 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BH1730-Library/BH1730.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BH1730-Library/BH1730.h"
)

target_include_directories(bh1730 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BH1730-Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(bh1730 INTERFACE
    arduino-compat
)
