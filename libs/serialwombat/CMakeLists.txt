add_library(serialwombat INTERFACE)

target_sources(serialwombat INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SerialWombatArdLib/src/SerialWombatPulseTimer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SerialWombatArdLib/src/SerialWombatQuadEnc.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SerialWombatArdLib/src/SerialWombatUART.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SerialWombatArdLib/src/SerialWombatAnalogInput.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SerialWombatArdLib/src/SerialWombatWatchdog.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SerialWombatArdLib/src/SerialWombat.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SerialWombatArdLib/src/SerialWombatPWM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SerialWombatArdLib/src/SerialWombatProtectedOutput.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SerialWombatArdLib/src/SerialWombatServo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SerialWombatArdLib/src/SerialWombatDebouncedInput.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SerialWombatArdLib/src/SerialWombatPulseTimer.h"
  "${CMAKE_CURRENT_LIST_DIR}/SerialWombatArdLib/src/SerialWombatAnalogInput.h"
  "${CMAKE_CURRENT_LIST_DIR}/SerialWombatArdLib/src/SerialWombatDebouncedInput.h"
  "${CMAKE_CURRENT_LIST_DIR}/SerialWombatArdLib/src/SerialWombatPWM.h"
  "${CMAKE_CURRENT_LIST_DIR}/SerialWombatArdLib/src/SerialWombatProtectedOutput.h"
  "${CMAKE_CURRENT_LIST_DIR}/SerialWombatArdLib/src/SerialWombatQuadEnc.h"
  "${CMAKE_CURRENT_LIST_DIR}/SerialWombatArdLib/src/SerialWombatServo.h"
  "${CMAKE_CURRENT_LIST_DIR}/SerialWombatArdLib/src/SerialWombatWatchdog.h"
  "${CMAKE_CURRENT_LIST_DIR}/SerialWombatArdLib/src/SerialWombat.h"
  "${CMAKE_CURRENT_LIST_DIR}/SerialWombatArdLib/src/SerialWombatUART.h"
)

target_include_directories(serialwombat INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SerialWombatArdLib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(serialwombat INTERFACE
    arduino-compat
)
