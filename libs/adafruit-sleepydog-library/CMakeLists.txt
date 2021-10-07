add_library(pac-adafruit-sleepydog-library INTERFACE)

target_sources(pac-adafruit-sleepydog-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SleepyDog/Adafruit_SleepyDog.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SleepyDog/utility/WatchdogKinetisK.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SleepyDog/utility/WatchdogSAMD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SleepyDog/utility/WatchdogAVR.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SleepyDog/utility/WatchdogKinetisL.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SleepyDog/utility/WatchdogNRF.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SleepyDog/utility/WatchdogESP32.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SleepyDog/Adafruit_SleepyDog.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SleepyDog/utility/WatchdogESP32.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SleepyDog/utility/WatchdogKinetisL.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SleepyDog/utility/WatchdogAVR.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SleepyDog/utility/WatchdogSAMD.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SleepyDog/utility/WatchdogKinetisK.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SleepyDog/utility/WatchdogNRF.h"
)

target_include_directories(pac-adafruit-sleepydog-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SleepyDog"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adafruit-sleepydog-library INTERFACE
    arduino-compat
)
