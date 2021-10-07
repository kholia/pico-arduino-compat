add_library(pac-thresholdlib INTERFACE)

target_sources(pac-thresholdlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Threshold/src/ThresholdLib.h"
)

target_include_directories(pac-thresholdlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-Threshold/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-thresholdlib INTERFACE
    arduino-compat
)
