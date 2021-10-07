add_library(pac-stm32duino-proximity-gesture INTERFACE)

target_sources(pac-stm32duino-proximity-gesture INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Proximity_Gesture/src/tof_gestures_TAP_1.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Proximity_Gesture/src/ring_buffer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Proximity_Gesture/src/tof_gestures_SWIPE_1.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Proximity_Gesture/src/tof_gestures_DIRSWIPE_1.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Proximity_Gesture/src/tof_motion.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Proximity_Gesture/src/tof_gestures_platform.h"
  "${CMAKE_CURRENT_LIST_DIR}/Proximity_Gesture/src/tof_gestures.h"
  "${CMAKE_CURRENT_LIST_DIR}/Proximity_Gesture/src/tof_gestures_TAP_1.h"
  "${CMAKE_CURRENT_LIST_DIR}/Proximity_Gesture/src/tof_gestures_SWIPE_1.h"
  "${CMAKE_CURRENT_LIST_DIR}/Proximity_Gesture/src/tof_gestures_DIRSWIPE_1.h"
  "${CMAKE_CURRENT_LIST_DIR}/Proximity_Gesture/src/tof_gestures_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/Proximity_Gesture/src/ring_buffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Proximity_Gesture/src/tof_motion.h"
)

target_include_directories(pac-stm32duino-proximity-gesture INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Proximity_Gesture/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-stm32duino-proximity-gesture INTERFACE
    arduino-compat
)
