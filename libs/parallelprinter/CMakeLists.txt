add_library(pac-parallelprinter INTERFACE)

target_sources(pac-parallelprinter INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ParallelPrinter/ParallelPrinter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ParallelPrinter/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ParallelPrinter/ParallelPrinter.h"
)

target_include_directories(pac-parallelprinter INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ParallelPrinter"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-parallelprinter INTERFACE
    arduino-compat
)
