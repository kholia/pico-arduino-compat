add_library(pac-bitreader INTERFACE)

target_sources(pac-bitreader INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BitReader/test/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BitReader/test/TestBitReader.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BitReader/src/bitreader.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BitReader/test/TestBitReader.h"
  "${CMAKE_CURRENT_LIST_DIR}/BitReader/src/bitreader.h"
)

target_include_directories(pac-bitreader INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BitReader/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-bitreader INTERFACE
    arduino-compat
)
