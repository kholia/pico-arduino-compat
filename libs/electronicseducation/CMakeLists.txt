add_library(pac-electronicseducation INTERFACE)

target_sources(pac-electronicseducation INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_Education/DistanceSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_Education/MotorsGeneral.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_Education/TactorRig.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_Education/ArduinoEducation.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_Education/TonePlayer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_Education/TonePlayer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_Education/ArduinoEducation.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_Education/TactorRig.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_Education/DistanceSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_Education/MotorsGeneral.h"
)

target_include_directories(pac-electronicseducation INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino_Education"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-electronicseducation INTERFACE
    arduino-compat
)
