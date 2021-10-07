add_library(pac-motor-driver-library INTERFACE)

target_sources(pac-motor-driver-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MotorDriver/src/MotorDriver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MotorDriver/src/MotorDriver.h"
)

target_include_directories(pac-motor-driver-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MotorDriver/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-motor-driver-library INTERFACE
    arduino-compat
)
