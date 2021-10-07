add_library(pac-serde INTERFACE)

target_sources(pac-serde INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/serde/tests/unit-tests/unit-tests.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/serde/tests/unit-tests/tests/unit-tests_SerdeRx.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/serde/tests/unit-tests/tests/unit-tests_SerialMock.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/serde/tests/unit-tests/tests/unit-tests_SerdePacket.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/serde/tests/unit-tests/tests/unit-tests_SerdeTx.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/serde/tests/unit-tests/tests/unit-tests_SerdeLoopback.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/serde/tests/mocks/test-mocks_SerialMock.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/serde/src/serde-commander.h"
  "${CMAKE_CURRENT_LIST_DIR}/serde/src/serde.h"
  "${CMAKE_CURRENT_LIST_DIR}/serde/src/serde-macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/serde/tests/unit-tests/unit-tests_Namespace.h"
  "${CMAKE_CURRENT_LIST_DIR}/serde/tests/unit-tests/unit-tests.h"
  "${CMAKE_CURRENT_LIST_DIR}/serde/tests/mocks/test-mocks_SerialMock.h"
  "${CMAKE_CURRENT_LIST_DIR}/serde/tests/mocks/test-mocks_Namespace.h"
  "${CMAKE_CURRENT_LIST_DIR}/serde/tests/mocks/test-mocks.h"
  "${CMAKE_CURRENT_LIST_DIR}/serde/tests/mocks/test-mocks_Defs.h"
)

target_include_directories(pac-serde INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/serde/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-serde INTERFACE
    arduino-compat
)
