add_library(pac-analogmultibutton INTERFACE)

target_sources(pac-analogmultibutton INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AnalogMultiButton/src/AnalogMultiButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AnalogMultiButton/src/AnalogMultiButton.h"
)

target_include_directories(pac-analogmultibutton INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AnalogMultiButton/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-analogmultibutton INTERFACE
    arduino-compat
)
