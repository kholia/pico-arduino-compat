add_library(pac-bitarray INTERFACE)

target_sources(pac-bitarray INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BitArray/BitArray.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BitArray/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BitArray/BitArray.h"
)

target_include_directories(pac-bitarray INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BitArray"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-bitarray INTERFACE
    arduino-compat
)
