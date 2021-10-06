add_library(motor_pid INTERFACE)

target_sources(motor_pid INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Motor_PID/src/Motor_PID.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Motor_PID/src/Motor_PID.h"
)

target_include_directories(motor_pid INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Motor_PID/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(motor_pid INTERFACE
    arduino-compat
)
