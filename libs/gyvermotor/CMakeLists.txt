add_library(gyvermotor INTERFACE)

target_sources(gyvermotor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GyverMotor/src/GyverMotor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GyverMotor/src/GyverMotor.h"
)

target_include_directories(gyvermotor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GyverMotor/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(gyvermotor INTERFACE
    arduino-compat
)
