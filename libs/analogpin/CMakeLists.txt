add_library(pac-analogpin INTERFACE)

target_sources(pac-analogpin INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AnalogPin/AnalogPin.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AnalogPin/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AnalogPin/AnalogPin.h"
)

target_include_directories(pac-analogpin INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AnalogPin"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-analogpin INTERFACE
    arduino-compat
)
