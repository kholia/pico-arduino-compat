add_library(motor-driver-library INTERFACE)

target_sources(motor-driver-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MotorDriver/src/MotorDriver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MotorDriver/src/MotorDriver.h"
)

target_include_directories(motor-driver-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MotorDriver/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(motor-driver-library INTERFACE
    arduino-compat
)
