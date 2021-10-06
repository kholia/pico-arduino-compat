add_library(slowmotionservo INTERFACE)

target_sources(slowmotionservo INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SlowMotionServo/src/SlowMotionServo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SlowMotionServo/src/SlowMotionServo.h"
)

target_include_directories(slowmotionservo INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SlowMotionServo/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(slowmotionservo INTERFACE
    arduino-compat
)
