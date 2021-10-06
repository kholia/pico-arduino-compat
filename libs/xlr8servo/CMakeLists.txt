add_library(xlr8servo INTERFACE)

target_sources(xlr8servo INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/XLR8Servo/src/XLR8Servo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/XLR8Servo/src/XLR8Servo.h"
)

target_include_directories(xlr8servo INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/XLR8Servo/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(xlr8servo INTERFACE
    arduino-compat
)
