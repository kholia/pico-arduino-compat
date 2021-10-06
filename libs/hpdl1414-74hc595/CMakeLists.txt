add_library(hpdl1414-74hc595 INTERFACE)

target_sources(hpdl1414-74hc595 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HPDL1414-74HC595-Arduino/src/HPDL1414_74HC595.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HPDL1414-74HC595-Arduino/src/HPDL1414_74HC595.h"
)

target_include_directories(hpdl1414-74hc595 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HPDL1414-74HC595-Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(hpdl1414-74hc595 INTERFACE
    arduino-compat
)
