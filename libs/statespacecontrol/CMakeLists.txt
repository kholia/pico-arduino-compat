add_library(statespacecontrol INTERFACE)

target_sources(statespacecontrol INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/StateSpaceControl/test/test_examples.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/StateSpaceControl/StateSpaceControl.h"
  "${CMAKE_CURRENT_LIST_DIR}/StateSpaceControl/Model.h"
  "${CMAKE_CURRENT_LIST_DIR}/StateSpaceControl/test/Arduino.h"
)

target_include_directories(statespacecontrol INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/StateSpaceControl"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(statespacecontrol INTERFACE
    arduino-compat
)
