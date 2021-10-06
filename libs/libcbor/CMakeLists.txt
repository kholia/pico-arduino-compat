add_library(libcbor INTERFACE)

target_sources(libcbor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/libCBOR/src/CBOR_utils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/libCBOR/src/CBOR_streams.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/libCBOR/src/CBOR_parsing.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/libCBOR/src/CBOR.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/libCBOR/src_tests/tests.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/libCBOR/src/CBOR_utils.h"
  "${CMAKE_CURRENT_LIST_DIR}/libCBOR/src/CBOR_streams.h"
  "${CMAKE_CURRENT_LIST_DIR}/libCBOR/src/CBOR_parsing.h"
  "${CMAKE_CURRENT_LIST_DIR}/libCBOR/src/CBOR.h"
  "${CMAKE_CURRENT_LIST_DIR}/libCBOR/src_tests/tests.h"
)

target_include_directories(libcbor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/libCBOR/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(libcbor INTERFACE
    arduino-compat
)
