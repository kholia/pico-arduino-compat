add_library(volanalyzer INTERFACE)

target_sources(volanalyzer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/VolAnalyzer/src/VolAnalyzer.h"
)

target_include_directories(volanalyzer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/VolAnalyzer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(volanalyzer INTERFACE
    arduino-compat
)
