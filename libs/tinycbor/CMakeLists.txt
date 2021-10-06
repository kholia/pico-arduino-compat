add_library(tinycbor INTERFACE)

target_sources(tinycbor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/tinycbor/src/tinycbor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/tinycbor/tests/parser/tst_parser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/tinycbor/tests/tojson/tst_tojson.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/tinycbor/tests/cpp/tst_cpp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/tinycbor/tests/encoder/tst_encoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/tinycbor/tools/cbordump/cbordump.c"
  "${CMAKE_CURRENT_LIST_DIR}/tinycbor/tools/json2cbor/json2cbor.c"
  "${CMAKE_CURRENT_LIST_DIR}/tinycbor/src/cborpretty_stdio.c"
  "${CMAKE_CURRENT_LIST_DIR}/tinycbor/src/cborparser_dup_string.c"
  "${CMAKE_CURRENT_LIST_DIR}/tinycbor/src/cborpretty.c"
  "${CMAKE_CURRENT_LIST_DIR}/tinycbor/src/cborencoder_close_container_checked.c"
  "${CMAKE_CURRENT_LIST_DIR}/tinycbor/src/cborerrorstrings.c"
  "${CMAKE_CURRENT_LIST_DIR}/tinycbor/src/cborvalidation.c"
  "${CMAKE_CURRENT_LIST_DIR}/tinycbor/src/cbortojson.c"
  "${CMAKE_CURRENT_LIST_DIR}/tinycbor/src/cborencoder.c"
  "${CMAKE_CURRENT_LIST_DIR}/tinycbor/src/cborparser.c"
  "${CMAKE_CURRENT_LIST_DIR}/tinycbor/examples/simplereader.c"
  "${CMAKE_CURRENT_LIST_DIR}/tinycbor/tests/c90/tst_c90.c"
  "${CMAKE_CURRENT_LIST_DIR}/tinycbor/src/tinycbor.h"
  "${CMAKE_CURRENT_LIST_DIR}/tinycbor/src/tinycbor-version.h"
  "${CMAKE_CURRENT_LIST_DIR}/tinycbor/src/cborjson.h"
  "${CMAKE_CURRENT_LIST_DIR}/tinycbor/src/cborinternal_p.h"
  "${CMAKE_CURRENT_LIST_DIR}/tinycbor/src/utf8_p.h"
  "${CMAKE_CURRENT_LIST_DIR}/tinycbor/src/compilersupport_p.h"
  "${CMAKE_CURRENT_LIST_DIR}/tinycbor/src/cbor.h"
)

target_include_directories(tinycbor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/tinycbor/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tinycbor INTERFACE
    arduino-compat
)
