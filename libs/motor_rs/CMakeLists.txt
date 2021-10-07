add_library(pac-motor_rs INTERFACE)

target_sources(pac-motor_rs INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Motor_RS/src/Motor_RS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Motor_RS/src/Motor_RS.h"
)

target_include_directories(pac-motor_rs INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Motor_RS/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-motor_rs INTERFACE
    arduino-compat
)
