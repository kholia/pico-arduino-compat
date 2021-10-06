add_library(thresholdlib INTERFACE)

target_sources(thresholdlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Threshold/src/ThresholdLib.h"
)

target_include_directories(thresholdlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-Threshold/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(thresholdlib INTERFACE
    arduino-compat
)
