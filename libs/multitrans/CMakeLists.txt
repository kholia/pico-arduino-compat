add_library(multitrans INTERFACE)

target_sources(multitrans INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MultiTrans/examples/StressTest/MemoryFree.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MultiTrans/src/ReceiveBuffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/MultiTrans/src/Transmitter.h"
  "${CMAKE_CURRENT_LIST_DIR}/MultiTrans/src/CharacterEncoding.h"
  "${CMAKE_CURRENT_LIST_DIR}/MultiTrans/src/Transceiver.h"
  "${CMAKE_CURRENT_LIST_DIR}/MultiTrans/src/MultiTrans.h"
  "${CMAKE_CURRENT_LIST_DIR}/MultiTrans/src/CommunicationPin.h"
  "${CMAKE_CURRENT_LIST_DIR}/MultiTrans/src/DebugData.h"
  "${CMAKE_CURRENT_LIST_DIR}/MultiTrans/src/TransmitBuffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/MultiTrans/src/Receiver.h"
  "${CMAKE_CURRENT_LIST_DIR}/MultiTrans/examples/StressTest/MemoryFree.h"
  "${CMAKE_CURRENT_LIST_DIR}/MultiTrans/examples/StressTest/settings.h"
  "${CMAKE_CURRENT_LIST_DIR}/MultiTrans/examples/StressTest/test-results/all-slowest-binary/settings.h"
  "${CMAKE_CURRENT_LIST_DIR}/MultiTrans/examples/StressTest/test-results/all-custom-receive-buffer-too-small/settings.h"
  "${CMAKE_CURRENT_LIST_DIR}/MultiTrans/examples/StressTest/test-results/slightly-too-fast/settings.h"
  "${CMAKE_CURRENT_LIST_DIR}/MultiTrans/examples/StressTest/test-results/all-fastest/settings.h"
  "${CMAKE_CURRENT_LIST_DIR}/MultiTrans/examples/StressTest/test-results/all-fastest-binary/settings.h"
  "${CMAKE_CURRENT_LIST_DIR}/MultiTrans/examples/StressTest/test-results/fastest/settings.h"
  "${CMAKE_CURRENT_LIST_DIR}/MultiTrans/examples/StressTest/test-results/fastest-binary/settings.h"
  "${CMAKE_CURRENT_LIST_DIR}/MultiTrans/examples/StressTest/test-results/all-slightly-too-fast/settings.h"
  "${CMAKE_CURRENT_LIST_DIR}/MultiTrans/examples/StressTest/test-results/all-custom-receive-buffer-size/settings.h"
  "${CMAKE_CURRENT_LIST_DIR}/MultiTrans/examples/StressTest/test-results/all-fastest-with-noise-injected/settings.h"
  "${CMAKE_CURRENT_LIST_DIR}/MultiTrans/examples/StressTest/test-results/all-slowest/settings.h"
)

target_include_directories(multitrans INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MultiTrans/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(multitrans INTERFACE
    arduino-compat
)
