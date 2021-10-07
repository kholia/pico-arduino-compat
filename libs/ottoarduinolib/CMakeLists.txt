add_library(pac-ottoarduinolib INTERFACE)

target_sources(pac-ottoarduinolib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/OttoArduinoLib/src/US.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OttoArduinoLib/src/OttoSound.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OttoArduinoLib/src/OttoSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OttoArduinoLib/src/Oscillator.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OttoArduinoLib/src/Otto.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OttoArduinoLib/src/OttoLee.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OttoArduinoLib/src/OttoSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/OttoArduinoLib/src/Otto.h"
  "${CMAKE_CURRENT_LIST_DIR}/OttoArduinoLib/src/OttoServo.h"
  "${CMAKE_CURRENT_LIST_DIR}/OttoArduinoLib/src/OttoLee.h"
  "${CMAKE_CURRENT_LIST_DIR}/OttoArduinoLib/src/OttoSound.h"
  "${CMAKE_CURRENT_LIST_DIR}/OttoArduinoLib/src/OttoSoundNote.h"
  "${CMAKE_CURRENT_LIST_DIR}/OttoArduinoLib/src/US.h"
  "${CMAKE_CURRENT_LIST_DIR}/OttoArduinoLib/src/Oscillator.h"
  "${CMAKE_CURRENT_LIST_DIR}/OttoArduinoLib/src/OttoGlobal.h"
  "${CMAKE_CURRENT_LIST_DIR}/OttoArduinoLib/src/OttoSoundSong.h"
)

target_include_directories(pac-ottoarduinolib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/OttoArduinoLib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ottoarduinolib INTERFACE
    arduino-compat
)
