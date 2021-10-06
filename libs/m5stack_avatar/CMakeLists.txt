add_library(m5stack_avatar INTERFACE)

target_sources(m5stack_avatar INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/m5stack-avatar/lib/AquesTalkTTS/AquesTalkTTS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/m5stack-avatar/src/ColorPalette.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/m5stack-avatar/src/BoundingRect.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/m5stack-avatar/src/Gaze.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/m5stack-avatar/src/DrawContext.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/m5stack-avatar/src/Mouth.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/m5stack-avatar/src/Avatar.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/m5stack-avatar/src/Eye.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/m5stack-avatar/src/Face.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/m5stack-avatar/src/Eyeblow.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/m5stack-avatar/lib/AquesTalkTTS/AquesTalkTTS.h"
  "${CMAKE_CURRENT_LIST_DIR}/m5stack-avatar/src/Accessory.h"
  "${CMAKE_CURRENT_LIST_DIR}/m5stack-avatar/src/Avatar.h"
  "${CMAKE_CURRENT_LIST_DIR}/m5stack-avatar/src/Gaze.h"
  "${CMAKE_CURRENT_LIST_DIR}/m5stack-avatar/src/Mouth.h"
  "${CMAKE_CURRENT_LIST_DIR}/m5stack-avatar/src/BoundingRect.h"
  "${CMAKE_CURRENT_LIST_DIR}/m5stack-avatar/src/Eye.h"
  "${CMAKE_CURRENT_LIST_DIR}/m5stack-avatar/src/Effect.h"
  "${CMAKE_CURRENT_LIST_DIR}/m5stack-avatar/src/ColorPalette.h"
  "${CMAKE_CURRENT_LIST_DIR}/m5stack-avatar/src/Face.h"
  "${CMAKE_CURRENT_LIST_DIR}/m5stack-avatar/src/Expression.h"
  "${CMAKE_CURRENT_LIST_DIR}/m5stack-avatar/src/Eyeblow.h"
  "${CMAKE_CURRENT_LIST_DIR}/m5stack-avatar/src/Drawable.h"
  "${CMAKE_CURRENT_LIST_DIR}/m5stack-avatar/src/DrawContext.h"
  "${CMAKE_CURRENT_LIST_DIR}/m5stack-avatar/src/Balloon.h"
  "${CMAKE_CURRENT_LIST_DIR}/m5stack-avatar/src/tasks/LipSync.h"
  "${CMAKE_CURRENT_LIST_DIR}/m5stack-avatar/src/faces/BMPFace.h"
  "${CMAKE_CURRENT_LIST_DIR}/m5stack-avatar/src/faces/OledFace.h"
  "${CMAKE_CURRENT_LIST_DIR}/m5stack-avatar/src/faces/eye_small.h"
  "${CMAKE_CURRENT_LIST_DIR}/m5stack-avatar/src/faces/DogFace.h"
)

target_include_directories(m5stack_avatar INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/m5stack-avatar/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET official-sd)
    add_subdirectory(../../official-libs/sd build_official-sd)
endif()

target_link_libraries(m5stack_avatar INTERFACE
    arduino-compat
    official-sd
)
