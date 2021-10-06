add_library(analogmultibutton INTERFACE)

target_sources(analogmultibutton INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AnalogMultiButton/src/AnalogMultiButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AnalogMultiButton/src/AnalogMultiButton.h"
)

target_include_directories(analogmultibutton INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AnalogMultiButton/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(analogmultibutton INTERFACE
    arduino-compat
)
