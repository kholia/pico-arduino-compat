add_library(fastaccelstepper INTERFACE)

target_sources(fastaccelstepper INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FastAccelStepper/src/FastAccelStepper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastAccelStepper/src/RampCalculator.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastAccelStepper/src/PoorManFloat.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastAccelStepper/src/StepperISR_esp32.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastAccelStepper/src/StepperISR_avr.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastAccelStepper/src/StepperISR_due.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastAccelStepper/src/RampGenerator.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastAccelStepper/examples/StepperDemo/test_seq_05.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastAccelStepper/examples/StepperDemo/test_seq_09.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastAccelStepper/examples/StepperDemo/test_seq_01.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastAccelStepper/examples/StepperDemo/test_seq_10.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastAccelStepper/examples/StepperDemo/test_seq_06.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastAccelStepper/examples/StepperDemo/test_seq_11.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastAccelStepper/examples/StepperDemo/test_seq_03.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastAccelStepper/examples/StepperDemo/test_seq_04.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastAccelStepper/examples/StepperDemo/test_seq_02.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastAccelStepper/examples/StepperDemo/test_seq_07.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastAccelStepper/examples/StepperDemo/test_seq_08.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastAccelStepper/tests/pc_based/test_01.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastAccelStepper/tests/pc_based/test_11.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastAccelStepper/tests/pc_based/test_10.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastAccelStepper/tests/pc_based/test_06.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastAccelStepper/tests/pc_based/test_04.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastAccelStepper/tests/pc_based/test_09.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastAccelStepper/tests/pc_based/pmf_test.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastAccelStepper/tests/pc_based/test_02.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastAccelStepper/tests/pc_based/test_08.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastAccelStepper/tests/pc_based/StepperISR_test.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastAccelStepper/tests/pc_based/rmc_test.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastAccelStepper/tests/pc_based/test_07.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastAccelStepper/tests/pc_based/test_05.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastAccelStepper/src/FastAccelStepper.h"
  "${CMAKE_CURRENT_LIST_DIR}/FastAccelStepper/src/common.h"
  "${CMAKE_CURRENT_LIST_DIR}/FastAccelStepper/src/RampCalculator.h"
  "${CMAKE_CURRENT_LIST_DIR}/FastAccelStepper/src/PoorManFloat.h"
  "${CMAKE_CURRENT_LIST_DIR}/FastAccelStepper/src/RampGenerator.h"
  "${CMAKE_CURRENT_LIST_DIR}/FastAccelStepper/src/StepperISR.h"
  "${CMAKE_CURRENT_LIST_DIR}/FastAccelStepper/src/AVRStepperPins.h"
  "${CMAKE_CURRENT_LIST_DIR}/FastAccelStepper/examples/StepperDemo/test_seq.h"
  "${CMAKE_CURRENT_LIST_DIR}/FastAccelStepper/tests/pc_based/stubs.h"
  "${CMAKE_CURRENT_LIST_DIR}/FastAccelStepper/tests/pc_based/RampChecker.h"
  "${CMAKE_CURRENT_LIST_DIR}/FastAccelStepper/tests/pc_based/test_03.h"
)

target_include_directories(fastaccelstepper INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FastAccelStepper/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(fastaccelstepper INTERFACE
    arduino-compat
)
