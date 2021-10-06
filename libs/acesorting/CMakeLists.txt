add_library(acesorting INTERFACE)

target_sources(acesorting INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AceSorting/examples/AutoBenchmark/Benchmark.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceSorting/examples/WorstCaseBenchmark/Benchmark.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceSorting/src/AceSorting.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSorting/src/ace_sorting/insertionSort.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSorting/src/ace_sorting/swap.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSorting/src/ace_sorting/combSort.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSorting/src/ace_sorting/shellSort.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSorting/src/ace_sorting/selectionSort.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSorting/src/ace_sorting/bubbleSort.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSorting/src/ace_sorting/quickSort.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSorting/examples/AutoBenchmark/Benchmark.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSorting/examples/WorstCaseBenchmark/Benchmark.h"
)

target_include_directories(acesorting INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AceSorting/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(acesorting INTERFACE
    arduino-compat
)
