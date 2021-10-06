add_library(parallelprinter INTERFACE)

target_sources(parallelprinter INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ParallelPrinter/ParallelPrinter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ParallelPrinter/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ParallelPrinter/ParallelPrinter.h"
)

target_include_directories(parallelprinter INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ParallelPrinter"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(parallelprinter INTERFACE
    arduino-compat
)
