add_library(pac-analog-buttons INTERFACE)

target_sources(pac-analog-buttons INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AnalogButtons/AnalogButtons.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AnalogButtons/AnalogButtons.h"
)

target_include_directories(pac-analog-buttons INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AnalogButtons"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-analog-buttons INTERFACE
    arduino-compat
)
