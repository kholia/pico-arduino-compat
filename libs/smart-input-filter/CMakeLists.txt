add_library(smart-input-filter INTERFACE)

target_sources(smart-input-filter INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/smart-input-filter/test/exponential-moving-average-filter-test.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/smart-input-filter/test/filter-test.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/smart-input-filter/test/debounce-filter-test.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/smart-input-filter/test/run-data-test.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/smart-input-filter/test/median-filter-test.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/smart-input-filter/src/debounce-filter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/smart-input-filter/src/filter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/smart-input-filter/src/debounce-input.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/smart-input-filter/test/run-data-test.h"
  "${CMAKE_CURRENT_LIST_DIR}/smart-input-filter/src/filter.h"
  "${CMAKE_CURRENT_LIST_DIR}/smart-input-filter/src/median-filter.h"
  "${CMAKE_CURRENT_LIST_DIR}/smart-input-filter/src/debounce-filter.h"
  "${CMAKE_CURRENT_LIST_DIR}/smart-input-filter/src/exponential-moving-average-filter.h"
)

target_include_directories(smart-input-filter INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/smart-input-filter/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(smart-input-filter INTERFACE
    arduino-compat
)
