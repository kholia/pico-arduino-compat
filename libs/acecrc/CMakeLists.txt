add_library(acecrc INTERFACE)

target_sources(acecrc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AceCRC/src/ace_crc/crc8_bit.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceCRC/src/ace_crc/crc8_nibblem.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceCRC/src/ace_crc/crc32_nibble.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceCRC/src/ace_crc/crc16ccitt_bit.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceCRC/src/ace_crc/crc32_byte.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceCRC/src/ace_crc/crc16ccitt_nibblem.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceCRC/src/ace_crc/crc8_nibble.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceCRC/src/ace_crc/crc16ccitt_nibble.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceCRC/src/ace_crc/crc32_nibblem.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceCRC/src/ace_crc/crc8_byte.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceCRC/src/ace_crc/crc32_bit.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceCRC/src/ace_crc/crc16ccitt_byte.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceCRC/examples/benchmarks/CpuBenchmark/Benchmark.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceCRC/src/ace_crc/crc8_byte.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceCRC/src/ace_crc/crc8_nibble.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceCRC/src/ace_crc/crc16ccitt_bit.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceCRC/src/ace_crc/crc16ccitt_nibblem.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceCRC/src/ace_crc/crc32_bit.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceCRC/src/ace_crc/crc32_nibble.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceCRC/src/ace_crc/crc16ccitt_nibble.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceCRC/src/ace_crc/crc32_byte.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceCRC/src/ace_crc/crc8_nibblem.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceCRC/src/ace_crc/crc16ccitt_byte.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceCRC/src/ace_crc/crc32_nibblem.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceCRC/src/ace_crc/crc8_bit.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceCRC/src/AceCRC.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceCRC/examples/benchmarks/CpuBenchmark/Benchmark.h"
)

target_include_directories(acecrc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AceCRC/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(acecrc INTERFACE
    arduino-compat
)
