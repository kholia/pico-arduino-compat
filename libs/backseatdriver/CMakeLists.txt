add_library(pac-backseatdriver INTERFACE)

target_sources(pac-backseatdriver INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/back-seat-driver/src/BackSeatDriver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/back-seat-driver/src/BackSeatDriver_TwoServoAdapter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/back-seat-driver/src/BackSeatDriver_DCMotorAdapter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/back-seat-driver/src/BackSeatDriver_TwoServoAdapter.h"
  "${CMAKE_CURRENT_LIST_DIR}/back-seat-driver/src/BackSeatDriver_DCMotorAdapter.h"
  "${CMAKE_CURRENT_LIST_DIR}/back-seat-driver/src/BackSeatDriver.h"
  "${CMAKE_CURRENT_LIST_DIR}/back-seat-driver/src/BackSeatDriver_IMotorAdapter.h"
)

target_include_directories(pac-backseatdriver INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/back-seat-driver/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-backseatdriver INTERFACE
    arduino-compat
)
