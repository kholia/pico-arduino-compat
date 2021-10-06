add_library(accelmotor INTERFACE)

target_sources(accelmotor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AccelMotor/src/AccelMotor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AccelMotor/src/AccelMotor.h"
)

target_include_directories(accelmotor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AccelMotor/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(accelmotor INTERFACE
    arduino-compat
)
