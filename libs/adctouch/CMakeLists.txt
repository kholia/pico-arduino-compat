add_library(pac-adctouch INTERFACE)

target_sources(pac-adctouch INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ADCTouch/src/ADCTouch.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ADCTouch/src/ADCTouch.h"
)

target_include_directories(pac-adctouch INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ADCTouch/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adctouch INTERFACE
    arduino-compat
)
