add_library(pac-ttp229 INTERFACE)

target_sources(pac-ttp229 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TTP229/TTP229.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TTP229/TTP229.h"
)

target_include_directories(pac-ttp229 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TTP229"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ttp229 INTERFACE
    arduino-compat
)
