add_library(pac-somo-ii-lib INTERFACE)

target_sources(pac-somo-ii-lib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/somo-ii-lib/src/SOMO_II.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/somo-ii-lib/src/SOMO_II.h"
)

target_include_directories(pac-somo-ii-lib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/somo-ii-lib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-somo-ii-lib INTERFACE
    arduino-compat
)
