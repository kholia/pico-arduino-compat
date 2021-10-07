add_library(pac-tmc2130stepper INTERFACE)

target_sources(pac-tmc2130stepper INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TMC2130Stepper/src/source/TMC2130Stepper_GCONF.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMC2130Stepper/src/source/TMC2130Stepper_CHOPCONF.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMC2130Stepper/src/source/SW_SPI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMC2130Stepper/src/source/TMC2130Stepper_PWMCONF.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMC2130Stepper/src/source/TMC2130Stepper_IHOLD_IRUN.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMC2130Stepper/src/source/TMC2130Stepper_COOLCONF.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMC2130Stepper/src/source/TMC2130Stepper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMC2130Stepper/src/source/TMC2130Stepper_DRV_STATUS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMC2130Stepper/src/TMC2130Stepper_UTILITY.h"
  "${CMAKE_CURRENT_LIST_DIR}/TMC2130Stepper/src/TMC2130Stepper_REGDEFS.h"
  "${CMAKE_CURRENT_LIST_DIR}/TMC2130Stepper/src/TMC2130Stepper.h"
  "${CMAKE_CURRENT_LIST_DIR}/TMC2130Stepper/src/source/SW_SPI.h"
  "${CMAKE_CURRENT_LIST_DIR}/TMC2130Stepper/src/source/TMC2130Stepper_MACROS.h"
)

target_include_directories(pac-tmc2130stepper INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TMC2130Stepper/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tmc2130stepper INTERFACE
    arduino-compat
)
