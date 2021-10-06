add_library(touchwheel INTERFACE)

target_sources(touchwheel INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TouchWheel/src/AdcTouchChannel.h"
  "${CMAKE_CURRENT_LIST_DIR}/TouchWheel/src/TouchWheel.h"
  "${CMAKE_CURRENT_LIST_DIR}/TouchWheel/src/TouchSlider.h"
)

target_include_directories(touchwheel INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TouchWheel/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(touchwheel INTERFACE
    arduino-compat
)
