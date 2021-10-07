add_library(pac-savlayfilter INTERFACE)

target_sources(pac-savlayfilter INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SavitzkyGolayFilter/src/SavLayFilter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SavitzkyGolayFilter/src/SavLayFilter.h"
)

target_include_directories(pac-savlayfilter INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SavitzkyGolayFilter/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-savlayfilter INTERFACE
    arduino-compat
)
