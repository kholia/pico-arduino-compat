add_library(pac-micro-ecc INTERFACE)

target_sources(pac-micro-ecc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/micro-ecc/uECC.c"
  "${CMAKE_CURRENT_LIST_DIR}/micro-ecc/test/test_ecdsa.c"
  "${CMAKE_CURRENT_LIST_DIR}/micro-ecc/test/public_key_test_vectors.c"
  "${CMAKE_CURRENT_LIST_DIR}/micro-ecc/test/test_compute.c"
  "${CMAKE_CURRENT_LIST_DIR}/micro-ecc/test/test_ecdh.c"
  "${CMAKE_CURRENT_LIST_DIR}/micro-ecc/test/test_compress.c"
  "${CMAKE_CURRENT_LIST_DIR}/micro-ecc/test/ecdsa_test_vectors.c"
  "${CMAKE_CURRENT_LIST_DIR}/micro-ecc/uECC.h"
  "${CMAKE_CURRENT_LIST_DIR}/micro-ecc/types.h"
  "${CMAKE_CURRENT_LIST_DIR}/micro-ecc/uECC_vli.h"
)

target_include_directories(pac-micro-ecc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/micro-ecc"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-micro-ecc INTERFACE
    arduino-compat
)
