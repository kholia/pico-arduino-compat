add_library(pac-acesegment INTERFACE)

target_sources(pac-acesegment INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/src/ace_segment/tm1637/Tm1637Module.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/src/ace_segment/max7219/Max7129Module.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/src/ace_segment/testing/TestableClockInterface.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/src/ace_segment/testing/EventLog.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/src/ace_segment/hc595/Hc595Module.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/archive/Renderer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/archive/FastSpiDriver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/archive/FastDirectDriver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/archive/SplitDigitDriver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/archive/MergedDigitDriver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/archive/Driver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/archive/FastSerialDriver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/archive/SplitSegmentDriver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/src/AceSegment.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/src/ace_segment/LedModule.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/src/ace_segment/hybrid/HybridModule.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/src/ace_segment/scanning/LedMatrixDirectFast4.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/src/ace_segment/scanning/LedMatrixDirect.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/src/ace_segment/scanning/LedMatrixBase.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/src/ace_segment/scanning/LedMatrixSingleHc595.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/src/ace_segment/scanning/ScanningModule.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/src/ace_segment/scanning/LedMatrixDualHc595.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/src/ace_segment/direct/DirectModule.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/src/ace_segment/direct/DirectFast4Module.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/src/ace_segment/tm1637/Tm1637Module.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/src/ace_segment/max7219/Max7219Module.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/src/ace_segment/testing/TestableLedModule.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/src/ace_segment/testing/TestableWireInterface.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/src/ace_segment/testing/TestableGpioInterface.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/src/ace_segment/testing/TestableLedMatrix.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/src/ace_segment/testing/TestableClockInterface.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/src/ace_segment/testing/TestableSpiInterface.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/src/ace_segment/testing/EventLog.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/src/ace_segment/testing/TestableTmiInterface.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/src/ace_segment/ht16k33/Ht16k33Module.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/src/ace_segment/hc595/Hc595Module.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/src/ace_segment/hw/remap.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/src/ace_segment/hw/GpioInterface.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/src/ace_segment/hw/ClockInterface.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/archive/StubStyler.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/archive/StyleTable.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/archive/Drivers.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/archive/FastSerialDriver.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/archive/FastSpiDriver.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/archive/FastDirectDriver.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/archive/SplitDigitDriver.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/archive/FakeSegmentDisplay.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/archive/FakeRenderer.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/archive/Styler.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/archive/PulseStyler.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/archive/SplitSegmentDriver.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/archive/MergedDigitDriver.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/archive/Renderer.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/archive/SpiAdapter.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/archive/LedMatrixSplit.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/archive/Driver.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/archive/StyledPattern.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/archive/BlinkStyler.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegment/archive/DimmablePattern.h"
)

target_include_directories(pac-acesegment INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AceSegment/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-acesegment INTERFACE
    arduino-compat
)
