add_library(pac-aunit INTERFACE)

target_sources(pac-aunit INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AUnit/src/aunit/TestOnce.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AUnit/src/aunit/FCString.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AUnit/src/aunit/Compare.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AUnit/src/aunit/MetaAssertion.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AUnit/src/aunit/TestRunner.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AUnit/src/aunit/Test.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AUnit/src/aunit/TestAgain.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AUnit/src/aunit/print64.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AUnit/src/aunit/string_util.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AUnit/src/aunit/Assertion.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AUnit/src/aunit/Printer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AUnit/tests/FailingTest/ExternalTests.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AUnit/tests/AUnitMetaTest/ExternalTests.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AUnit/src/AUnit.h"
  "${CMAKE_CURRENT_LIST_DIR}/AUnit/src/AUnitVerbose.h"
  "${CMAKE_CURRENT_LIST_DIR}/AUnit/src/aunit/TestMacros.h"
  "${CMAKE_CURRENT_LIST_DIR}/AUnit/src/aunit/Test.h"
  "${CMAKE_CURRENT_LIST_DIR}/AUnit/src/aunit/TestAgain.h"
  "${CMAKE_CURRENT_LIST_DIR}/AUnit/src/aunit/string_util.h"
  "${CMAKE_CURRENT_LIST_DIR}/AUnit/src/aunit/MetaAssertion.h"
  "${CMAKE_CURRENT_LIST_DIR}/AUnit/src/aunit/TestOnce.h"
  "${CMAKE_CURRENT_LIST_DIR}/AUnit/src/aunit/print64.h"
  "${CMAKE_CURRENT_LIST_DIR}/AUnit/src/aunit/TestRunner.h"
  "${CMAKE_CURRENT_LIST_DIR}/AUnit/src/aunit/AssertVerboseMacros.h"
  "${CMAKE_CURRENT_LIST_DIR}/AUnit/src/aunit/Flash.h"
  "${CMAKE_CURRENT_LIST_DIR}/AUnit/src/aunit/Assertion.h"
  "${CMAKE_CURRENT_LIST_DIR}/AUnit/src/aunit/Compare.h"
  "${CMAKE_CURRENT_LIST_DIR}/AUnit/src/aunit/MetaAssertMacros.h"
  "${CMAKE_CURRENT_LIST_DIR}/AUnit/src/aunit/Verbosity.h"
  "${CMAKE_CURRENT_LIST_DIR}/AUnit/src/aunit/AssertMacros.h"
  "${CMAKE_CURRENT_LIST_DIR}/AUnit/src/aunit/FCString.h"
  "${CMAKE_CURRENT_LIST_DIR}/AUnit/src/aunit/Printer.h"
  "${CMAKE_CURRENT_LIST_DIR}/AUnit/src/aunit/contrib/gtest.h"
  "${CMAKE_CURRENT_LIST_DIR}/AUnit/src/aunit/fake/FakePrint.h"
  "${CMAKE_CURRENT_LIST_DIR}/AUnit/tests/FailingTest/ExternalTests.h"
  "${CMAKE_CURRENT_LIST_DIR}/AUnit/tests/AUnitMetaTest/AUnitMetaTest.h"
)

target_include_directories(pac-aunit INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AUnit/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-aunit INTERFACE
    arduino-compat
)
