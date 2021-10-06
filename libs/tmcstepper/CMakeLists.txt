add_library(tmcstepper INTERFACE)

target_sources(tmcstepper INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TMCStepper/src/source/SMARTEN.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMCStepper/src/source/TMC2208Stepper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMCStepper/src/source/IHOLD_IRUN.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMCStepper/src/source/DRVCONF.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMCStepper/src/source/SHORT_CONF.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMCStepper/src/source/RAMP_STAT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMCStepper/src/source/COOLCONF.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMCStepper/src/source/SERIAL_SWITCH.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMCStepper/src/source/GCONF.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMCStepper/src/source/DRVCTRL.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMCStepper/src/source/DRVSTATUS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMCStepper/src/source/TMC5160Stepper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMCStepper/src/source/TMC2660Stepper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMCStepper/src/source/TMC2160Stepper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMCStepper/src/source/bcm2835_stream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMCStepper/src/source/SW_SPI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMCStepper/src/source/TMC2209Stepper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMCStepper/src/source/PWMCONF.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMCStepper/src/source/ENCMODE.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMCStepper/src/source/SGCSCONF.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMCStepper/src/source/bcm2835_spi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMCStepper/src/source/TMC5130Stepper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMCStepper/src/source/CHOPCONF.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMCStepper/src/source/DRV_STATUS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMCStepper/src/source/SW_MODE.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMCStepper/src/source/TMC2130Stepper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMCStepper/src/source/DRV_CONF.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMCStepper/src/source/TMCStepper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMCStepper/src/TMCStepper.h"
  "${CMAKE_CURRENT_LIST_DIR}/TMCStepper/src/TMCStepper_UTILITY.h"
  "${CMAKE_CURRENT_LIST_DIR}/TMCStepper/src/source/TMC_platforms.h"
  "${CMAKE_CURRENT_LIST_DIR}/TMCStepper/src/source/SW_SPI.h"
  "${CMAKE_CURRENT_LIST_DIR}/TMCStepper/src/source/TMC2130_bitfields.h"
  "${CMAKE_CURRENT_LIST_DIR}/TMCStepper/src/source/TMC5160_bitfields.h"
  "${CMAKE_CURRENT_LIST_DIR}/TMCStepper/src/source/TMC_MACROS.h"
  "${CMAKE_CURRENT_LIST_DIR}/TMCStepper/src/source/rpi_bcm2835.h"
  "${CMAKE_CURRENT_LIST_DIR}/TMCStepper/src/source/TMC2660_bitfields.h"
  "${CMAKE_CURRENT_LIST_DIR}/TMCStepper/src/source/bcm2835_stream.h"
  "${CMAKE_CURRENT_LIST_DIR}/TMCStepper/src/source/TMC2209_bitfields.h"
  "${CMAKE_CURRENT_LIST_DIR}/TMCStepper/src/source/TMC2160_bitfields.h"
  "${CMAKE_CURRENT_LIST_DIR}/TMCStepper/src/source/TMC2208_bitfields.h"
  "${CMAKE_CURRENT_LIST_DIR}/TMCStepper/src/source/bcm2835_spi.h"
  "${CMAKE_CURRENT_LIST_DIR}/TMCStepper/src/source/SERIAL_SWITCH.h"
  "${CMAKE_CURRENT_LIST_DIR}/TMCStepper/src/source/TMC5130_bitfields.h"
)

target_include_directories(tmcstepper INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TMCStepper/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tmcstepper INTERFACE
    arduino-compat
)
