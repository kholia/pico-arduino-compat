add_library(pac-asyncservolib INTERFACE)

target_sources(pac-asyncservolib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-AsyncServo/src/AsyncServoLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-AsyncServo/src/AsyncServoLib.h"
)

target_include_directories(pac-asyncservolib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-AsyncServo/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-asyncservolib INTERFACE
    arduino-compat
)
