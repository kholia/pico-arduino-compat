add_library(tb9051ftgmotorcarrier INTERFACE)

target_sources(tb9051ftgmotorcarrier INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/tb9051ftg-motor-carrier-arduino/src/TB9051FTGMotorCarrier.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/tb9051ftg-motor-carrier-arduino/src/TB9051FTGMotorCarrier.h"
)

target_include_directories(tb9051ftgmotorcarrier INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/tb9051ftg-motor-carrier-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tb9051ftgmotorcarrier INTERFACE
    arduino-compat
)
