add_library(rotarydecoderswitch INTERFACE)

target_sources(rotarydecoderswitch INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/rotaryDecoderSwitch/rotaryDecoderSwitch.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/rotaryDecoderSwitch/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/rotaryDecoderSwitch/rotaryDecoderSwitch.h"
)

target_include_directories(rotarydecoderswitch INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/rotaryDecoderSwitch"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rotarydecoderswitch INTERFACE
    arduino-compat
)
