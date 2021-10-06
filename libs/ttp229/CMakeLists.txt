add_library(ttp229 INTERFACE)

target_sources(ttp229 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TTP229/TTP229.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TTP229/TTP229.h"
)

target_include_directories(ttp229 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TTP229"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ttp229 INTERFACE
    arduino-compat
)
