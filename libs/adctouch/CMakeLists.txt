add_library(adctouch INTERFACE)

target_sources(adctouch INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ADCTouch/src/ADCTouch.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ADCTouch/src/ADCTouch.h"
)

target_include_directories(adctouch INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ADCTouch/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(adctouch INTERFACE
    arduino-compat
)
