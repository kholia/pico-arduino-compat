add_library(asyncservolib INTERFACE)

target_sources(asyncservolib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-AsyncServo/src/AsyncServoLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-AsyncServo/src/AsyncServoLib.h"
)

target_include_directories(asyncservolib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-AsyncServo/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(asyncservolib INTERFACE
    arduino-compat
)
