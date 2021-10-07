add_library(pac-volanalyzer INTERFACE)

target_sources(pac-volanalyzer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/VolAnalyzer/src/VolAnalyzer.h"
)

target_include_directories(pac-volanalyzer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/VolAnalyzer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-volanalyzer INTERFACE
    arduino-compat
)
