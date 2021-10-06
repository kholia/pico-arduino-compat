add_library(backseatdriver INTERFACE)

target_sources(backseatdriver INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/back-seat-driver/src/BackSeatDriver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/back-seat-driver/src/BackSeatDriver_TwoServoAdapter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/back-seat-driver/src/BackSeatDriver_DCMotorAdapter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/back-seat-driver/src/BackSeatDriver_TwoServoAdapter.h"
  "${CMAKE_CURRENT_LIST_DIR}/back-seat-driver/src/BackSeatDriver_DCMotorAdapter.h"
  "${CMAKE_CURRENT_LIST_DIR}/back-seat-driver/src/BackSeatDriver.h"
  "${CMAKE_CURRENT_LIST_DIR}/back-seat-driver/src/BackSeatDriver_IMotorAdapter.h"
)

target_include_directories(backseatdriver INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/back-seat-driver/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(backseatdriver INTERFACE
    arduino-compat
)
