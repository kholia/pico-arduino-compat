add_library(alignedjoy INTERFACE)

target_sources(alignedjoy INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AlignedJoystick/src/AlignedJoy.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AlignedJoystick/src/AlignedJoy.h"
)

target_include_directories(alignedjoy INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AlignedJoystick/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(alignedjoy INTERFACE
    arduino-compat
)
