add_library(pac-signalcontrol INTERFACE)

target_sources(pac-signalcontrol INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/test/testInvertInput.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/test/sketchSignal3AspectWithDistanceTimer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/test/signal.ino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/test/testArduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/test/testAndInput.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/test/testSettableInput.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/test/testFastLight.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/test/testDistanceToDigitalInput.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/test/sketchTwoSignal3AspectJoiningPoint.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/test/testSignalUnitTest.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/test/testBlinkingLight.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/test/TestTools.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/test/ArduinoMock.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/test/testDistanceTimer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/test/testBlockDistanceInput.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/test/sketchSignal2AspectWithButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/test/sketchTwoIndependentSignal3Aspect.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/test/testAll.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/test/testSignal3Aspect.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/test/testPinInput.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/test/sketchSignal3AspectWithBlockDistanceInput.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/test/testSignal2Aspect.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/test/testBlockTopologies.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/test/testDistanceChoice.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/test/testDistanceWithCondition.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/test/testSignal4Aspect.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/test/testSlowLight.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/test/Arduino.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/test/testArduino.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/test/TestTools.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/test/ArduinoMock.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/test/MockInput.h"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/test/testFastLight.h"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/test/testDistanceWithCondition.h"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/test/testDistanceChoice.h"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/test/testPinInput.h"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/test/testDistanceToDigitalInput.h"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/test/testBlockTopologies.h"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/test/testBlinkingLight.h"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/test/testInvertInput.h"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/test/MockDistanceInput.h"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/test/testSignal4Aspect.h"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/test/testSignalUnitTest.h"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/test/testSignal3Aspect.h"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/test/testBlockDistanceInput.h"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/test/testSignal2Aspect.h"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/test/testDistanceTimer.h"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/test/testAndInput.h"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/test/testSlowLight.h"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/test/testSettableInput.h"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/src/InvertInput.h"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/src/PinInput.h"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/src/Signal4Aspect.h"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/src/FastLight.h"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/src/DistanceToDigitalInput.h"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/src/SettableInput.h"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/src/AndInput.h"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/src/SignalFyrSken.h"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/src/DigitalInput.h"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/src/BlockDistanceInput.h"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/src/DistanceTimer.h"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/src/Signal2Aspect.h"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/src/Light.h"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/src/DistanceInput.h"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/src/SlowLight.h"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/src/DistanceChoice.h"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/src/DistanceWithCondition.h"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/src/BlinkingLight.h"
  "${CMAKE_CURRENT_LIST_DIR}/SignalControl/src/Signal3Aspect.h"
)

target_include_directories(pac-signalcontrol INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SignalControl/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-signalcontrol INTERFACE
    arduino-compat
)
