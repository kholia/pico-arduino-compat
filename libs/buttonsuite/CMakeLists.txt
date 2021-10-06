add_library(buttonsuite INTERFACE)

target_sources(buttonsuite INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ButtonSuite-Arduino/src/CycleButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ButtonSuite-Arduino/src/PushEventButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ButtonSuite-Arduino/src/ResettableButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ButtonSuite-Arduino/src/LatchingButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ButtonSuite-Arduino/src/AlwaysOffButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ButtonSuite-Arduino/src/CountingButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ButtonSuite-Arduino/src/ButtonBase.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ButtonSuite-Arduino/src/TwoStateButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ButtonSuite-Arduino/src/MomentaryButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ButtonSuite-Arduino/src/AlwaysOnButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ButtonSuite-Arduino/examples/Advanced_CustomButton_Demo_01/CustomButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ButtonSuite-Arduino/src/AlwaysOffButton.h"
  "${CMAKE_CURRENT_LIST_DIR}/ButtonSuite-Arduino/src/ButtonEnums.h"
  "${CMAKE_CURRENT_LIST_DIR}/ButtonSuite-Arduino/src/CycleButton.h"
  "${CMAKE_CURRENT_LIST_DIR}/ButtonSuite-Arduino/src/TwoStateButton.h"
  "${CMAKE_CURRENT_LIST_DIR}/ButtonSuite-Arduino/src/ButtonBase.h"
  "${CMAKE_CURRENT_LIST_DIR}/ButtonSuite-Arduino/src/PushEventButton.h"
  "${CMAKE_CURRENT_LIST_DIR}/ButtonSuite-Arduino/src/CountingButton.h"
  "${CMAKE_CURRENT_LIST_DIR}/ButtonSuite-Arduino/src/AlwaysOnButton.h"
  "${CMAKE_CURRENT_LIST_DIR}/ButtonSuite-Arduino/src/LatchingButton.h"
  "${CMAKE_CURRENT_LIST_DIR}/ButtonSuite-Arduino/src/MomentaryButton.h"
  "${CMAKE_CURRENT_LIST_DIR}/ButtonSuite-Arduino/src/ResettableButton.h"
  "${CMAKE_CURRENT_LIST_DIR}/ButtonSuite-Arduino/examples/Advanced_CustomButton_Demo_01/CustomButton.h"
)

target_include_directories(buttonsuite INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ButtonSuite-Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(buttonsuite INTERFACE
    arduino-compat
)
