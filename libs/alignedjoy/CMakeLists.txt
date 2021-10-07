add_library(pac-alignedjoy INTERFACE)

target_sources(pac-alignedjoy INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AlignedJoystick/src/AlignedJoy.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AlignedJoystick/src/AlignedJoy.h"
)

target_include_directories(pac-alignedjoy INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AlignedJoystick/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-alignedjoy INTERFACE
    arduino-compat
)
