add_library(microbot_motor_shield INTERFACE)

target_sources(microbot_motor_shield INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Microbot-Motor-Shield/src/microbot_motor_shield.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Microbot-Motor-Shield/src/microbot_motor_shield.h"
)

target_include_directories(microbot_motor_shield INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Microbot-Motor-Shield/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(microbot_motor_shield INTERFACE
    arduino-compat
)
