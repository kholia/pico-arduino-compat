add_library(pac-bip66 INTERFACE)

target_sources(pac-bip66 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BIP66/test/bip66.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BIP66/test/iot/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BIP66/src/bip66.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BIP66/bip66.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/BIP66/test/test_cases.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/BIP66/src/bip66.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/BIP66/test/iot/gtest/gtest.h"
)

target_include_directories(pac-bip66 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BIP66/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-bip66 INTERFACE
    arduino-compat
)
