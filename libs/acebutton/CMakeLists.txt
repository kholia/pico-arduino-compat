add_library(pac-acebutton INTERFACE)

target_sources(pac-acebutton INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AceButton/src/ace_button/ButtonConfig.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceButton/src/ace_button/LadderButtonConfig.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceButton/src/ace_button/AceButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceButton/src/ace_button/EncodedButtonConfig.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceButton/src/ace_button/testing/EventTracker.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceButton/src/AceButton.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceButton/src/ace_button/Encoded8To3ButtonConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceButton/src/ace_button/AceButton.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceButton/src/ace_button/EncodedButtonConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceButton/src/ace_button/Encoded4To2ButtonConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceButton/src/ace_button/IEventHandler.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceButton/src/ace_button/ButtonConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceButton/src/ace_button/LadderButtonConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceButton/src/ace_button/fast/ButtonConfigFast1.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceButton/src/ace_button/fast/ButtonConfigFast2.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceButton/src/ace_button/fast/ButtonConfigFast3.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceButton/src/ace_button/testing/HelperForEncodedButtonConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceButton/src/ace_button/testing/HelperForLadderButtonConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceButton/src/ace_button/testing/HelperForButtonConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceButton/src/ace_button/testing/EventTracker.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceButton/src/ace_button/testing/TestableEncodedButtonConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceButton/src/ace_button/testing/TestableButtonConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceButton/src/ace_button/testing/TestableLadderButtonConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceButton/examples/AutoBenchmark/ProfilingButtonConfig.h"
)

target_include_directories(pac-acebutton INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AceButton/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-acebutton INTERFACE
    arduino-compat
)
