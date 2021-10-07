add_library(pac-timeprofiler INTERFACE)

target_sources(pac-timeprofiler INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TimeProfiler/examples/cpp/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TimeProfiler/TimeProfiler.h"
  "${CMAKE_CURRENT_LIST_DIR}/TimeProfiler/util/ArxContainer/ArxContainer.h"
  "${CMAKE_CURRENT_LIST_DIR}/TimeProfiler/util/ArxContainer/ArxContainer/has_include.h"
  "${CMAKE_CURRENT_LIST_DIR}/TimeProfiler/util/ArxContainer/ArxContainer/initializer_list.h"
  "${CMAKE_CURRENT_LIST_DIR}/TimeProfiler/util/ArxContainer/ArxContainer/replace_minmax_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/TimeProfiler/util/ArxContainer/ArxContainer/has_libstdcplusplus.h"
)

target_include_directories(pac-timeprofiler INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TimeProfiler"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-timeprofiler INTERFACE
    arduino-compat
)
