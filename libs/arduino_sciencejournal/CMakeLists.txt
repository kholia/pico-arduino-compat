add_library(pac-arduino_sciencejournal INTERFACE)

target_sources(pac-arduino_sciencejournal INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_ScienceJournal/src/INA226.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_ScienceJournal/examples/Nano33BLESenseFirmware/LowPower.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_ScienceJournal/src/INA226.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_ScienceJournal/src/ArduinoScienceJournal.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_ScienceJournal/examples/Nano33BLESenseFirmware/LowPower.h"
)

target_include_directories(pac-arduino_sciencejournal INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino_ScienceJournal/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduino_sciencejournal INTERFACE
    arduino-compat
)
