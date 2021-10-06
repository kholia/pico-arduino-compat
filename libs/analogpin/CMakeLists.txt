add_library(analogpin INTERFACE)

target_sources(analogpin INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AnalogPin/AnalogPin.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AnalogPin/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AnalogPin/AnalogPin.h"
)

target_include_directories(analogpin INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AnalogPin"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(analogpin INTERFACE
    arduino-compat
)
