add_library(pac-tmc2208stepper INTERFACE)

target_sources(pac-tmc2208stepper INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TMC2208Stepper/src/source/TMC2208Stepper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMC2208Stepper/src/source/TMC2208Stepper_CHOPCONF.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMC2208Stepper/src/source/TMC2208Stepper_OTP_READ.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMC2208Stepper/src/source/TMC2208Stepper_DRVSTATUS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMC2208Stepper/src/source/TMC2208Stepper_PWMCONF.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMC2208Stepper/src/source/TMC2208Stepper_GCONF.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMC2208Stepper/src/TMC2208Stepper_REGDEFS.h"
  "${CMAKE_CURRENT_LIST_DIR}/TMC2208Stepper/src/TMC2208Stepper.h"
  "${CMAKE_CURRENT_LIST_DIR}/TMC2208Stepper/src/source/TMC2208Stepper_MACROS.h"
)

target_include_directories(pac-tmc2208stepper INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TMC2208Stepper/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tmc2208stepper INTERFACE
    arduino-compat
)
