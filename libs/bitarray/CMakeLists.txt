add_library(bitarray INTERFACE)

target_sources(bitarray INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BitArray/BitArray.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BitArray/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BitArray/BitArray.h"
)

target_include_directories(bitarray INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BitArray"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(bitarray INTERFACE
    arduino-compat
)
