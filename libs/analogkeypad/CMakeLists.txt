add_library(pac-analogkeypad INTERFACE)

target_sources(pac-analogkeypad INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AnalogKeypad/AnalogKeypad.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AnalogKeypad/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AnalogKeypad/AnalogKeypad.h"
)

target_include_directories(pac-analogkeypad INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AnalogKeypad"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-analogkeypad INTERFACE
    arduino-compat
)
