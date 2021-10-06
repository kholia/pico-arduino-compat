add_library(acecommon INTERFACE)

target_sources(acecommon INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AceCommon/src/pstrings/pstrings.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceCommon/src/fstrings/FCString.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceCommon/src/url_encoding/url_encoding.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceCommon/src/cstrings/copyReplace.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceCommon/src/kstrings/KString.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceCommon/examples/AutoBenchmark/Benchmark.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceCommon/examples/UrlEncodingBenchmark/url_coding.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceCommon/examples/UrlEncodingBenchmark/url_coding.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceCommon/src/AceCommon.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceCommon/src/hash/djb2.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceCommon/src/algorithms/reverse.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceCommon/src/algorithms/isSorted.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceCommon/src/algorithms/binarySearch.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceCommon/src/algorithms/linearSearch.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceCommon/src/pstrings/pstrings.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceCommon/src/fstrings/FlashString.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceCommon/src/fstrings/FCString.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceCommon/src/print_utils/printIntAsFloat.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceCommon/src/print_utils/printReplaceTo.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceCommon/src/print_utils/printfTo.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceCommon/src/print_utils/printPadTo.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceCommon/src/print_str/PrintStr.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceCommon/src/timing_stats/TimingStats.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceCommon/src/timing_stats/GenericStats.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceCommon/src/url_encoding/url_encoding.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceCommon/src/arithmetic/arithmetic.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceCommon/src/cstrings/copyReplace.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceCommon/src/kstrings/KString.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceCommon/examples/AutoBenchmark/Benchmark.h"
)

target_include_directories(acecommon INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AceCommon/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(acecommon INTERFACE
    arduino-compat
)
