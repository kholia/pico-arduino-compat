add_library(arduinounit INTERFACE)

target_sources(arduinounit INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduinounit/firmware/mockFirmware.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduinounit/zen/mockZen.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduinounit/mocks/mockTime.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduinounit/mocks/mockStream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduinounit/mocks/mockString.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduinounit/mocks/mockPrint.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduinounit/src/ArduinoUnitUtility/ArduinoUnitMockStream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduinounit/src/ArduinoUnitUtility/ArduinoUnitMockTime.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduinounit/src/ArduinoUnitUtility/ArduinoUnitMockPrint.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduinounit/src/ArduinoUnitUtility/FakeStream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduinounit/src/ArduinoUnitUtility/ArduinoUnitString.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduinounit/src/ArduinoUnitUtility/FreeMemory.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduinounit/src/ArduinoUnitUtility/FakeStreamBuffer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduinounit/src/ArduinoUnitUtility/ArduinoUnit.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduinounit/src/ArduinoUnitUtility/ArduinoUnitMockWString.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduinounit/src/ArduinoUnitUtility/ArduinoUnitMockPrintable.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduinounit/examples/mockstream/mockMockstream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduinounit/examples/vitro/mockVitro.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduinounit/examples/verbosity/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduinounit/examples/advanced/mockAdvanced.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduinounit/attic/ArduinoUnitMockPrint.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduinounit/attic/ArduinoUnitMockWString.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduinounit/attic/testWiden.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduinounit/attic/ArduinoUnitMockPrintable.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduinounit/src/ArduinoUnitMock.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduinounit/src/ArduinoUnit.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduinounit/src/ArduinoUnitUtility/FreeMemory.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduinounit/src/ArduinoUnitUtility/ArduinoUnitMockPrint.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduinounit/src/ArduinoUnitUtility/ArduinoUnitMockStream.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduinounit/src/ArduinoUnitUtility/FakeStreamBuffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduinounit/src/ArduinoUnitUtility/ArduinoUnitWiden.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduinounit/src/ArduinoUnitUtility/Flash.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduinounit/src/ArduinoUnitUtility/ArduinoUnitMock.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduinounit/src/ArduinoUnitUtility/Compare.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduinounit/src/ArduinoUnitUtility/ArduinoUnitMockTime.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduinounit/src/ArduinoUnitUtility/ArduinoUnitMockWString.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduinounit/src/ArduinoUnitUtility/ArduinoUnitMockPrintable.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduinounit/src/ArduinoUnitUtility/ArduinoUnitString.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduinounit/src/ArduinoUnitUtility/FakeStream.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduinounit/attic/ArduinoUnitMockPrint.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduinounit/attic/ArduinoUnitWiden.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduinounit/attic/ArduinoUnitMockWString.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduinounit/attic/ArduinoUnitMockPrintable.h"
)

target_include_directories(arduinounit INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduinounit/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arduinounit INTERFACE
    arduino-compat
)
