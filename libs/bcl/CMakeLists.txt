add_library(bcl INTERFACE)

target_sources(bcl INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/bcl/extras/nayuki/EcdsaOpCount.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/bcl/test/CurvePointTest.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/bcl/test/Uint256Test.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/bcl/test/Keccak256Test.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/bcl/test/Sha512Test.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/bcl/test/ExtendedPrivateKeyTest.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/bcl/test/Sha256Test.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/bcl/test/EcdsaTest.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/bcl/test/Base58CheckTest.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/bcl/test/FieldIntTest.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/bcl/test/Sha256HashTest.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/bcl/test/Ripemd160Test.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/bcl/test/embedded/test_main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/bcl/src/ExtendedPrivateKey.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/bcl/src/Sha256.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/bcl/src/Ripemd160.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/bcl/src/CurvePoint.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/bcl/src/Base58Check.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/bcl/src/Utils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/bcl/src/Keccak256.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/bcl/src/Sha512.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/bcl/src/Sha256Hash.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/bcl/src/Uint256.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/bcl/src/FieldInt.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/bcl/src/Ecdsa.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/bcl/extras/nayuki/CountOps.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/bcl/extras/nayuki/AsmX8664.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/bcl/test/TestHelper.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/bcl/src/Sha256Hash.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/bcl/src/Uint256.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/bcl/src/Keccak256.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/bcl/src/FieldInt.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/bcl/src/Sha512.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/bcl/src/Ripemd160.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/bcl/src/ExtendedPrivateKey.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/bcl/src/CurvePoint.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/bcl/src/Sha256.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/bcl/src/Utils.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/bcl/src/Base58Check.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/bcl/src/Ecdsa.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/bcl/test/embedded/gtest/gtest.h"
)

target_include_directories(bcl INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/bcl/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(bcl INTERFACE
    arduino-compat
)
