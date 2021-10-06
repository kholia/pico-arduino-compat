add_library(hercules-dual-15a-6-20v-motor-controller INTERFACE)

target_sources(hercules-dual-15a-6-20v-motor-controller INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Hercules_Motor_Driver/Hercules_Stepper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Hercules_Motor_Driver/Hercules.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Hercules_Motor_Driver/seeed_pwm.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Hercules_Motor_Driver/Hercules.h"
  "${CMAKE_CURRENT_LIST_DIR}/Hercules_Motor_Driver/Hercules_Stepper.h"
  "${CMAKE_CURRENT_LIST_DIR}/Hercules_Motor_Driver/seeed_pwm.h"
  "${CMAKE_CURRENT_LIST_DIR}/Hercules_Motor_Driver/Hercules_dfs.h"
)

target_include_directories(hercules-dual-15a-6-20v-motor-controller INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Hercules_Motor_Driver"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(hercules-dual-15a-6-20v-motor-controller INTERFACE
    arduino-compat
)
