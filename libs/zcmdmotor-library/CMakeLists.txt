add_library(pac-zcmdmotor-library INTERFACE)

target_sources(pac-zcmdmotor-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ZCmdMotor/ZCmdMotor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ZCmdMotor/ZcmdMotor.h"
)

target_include_directories(pac-zcmdmotor-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ZCmdMotor"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-zcmdmotor-library INTERFACE
    arduino-compat
)
