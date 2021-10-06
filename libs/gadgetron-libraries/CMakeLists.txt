add_library(gadgetron-libraries INTERFACE)

target_sources(gadgetron-libraries INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/gadgetron-software-libraries/utility/DistanceSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/gadgetron-software-libraries/utility/ServoMotor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/gadgetron-software-libraries/utility/LEDArray.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/gadgetron-software-libraries/utility/RGBLED.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/gadgetron-software-libraries/utility/Pincer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/gadgetron-software-libraries/utility/Adafruit_GFX.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/gadgetron-software-libraries/utility/Motor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/gadgetron-software-libraries/utility/GadgetManager.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/gadgetron-software-libraries/utility/MomentaryButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/gadgetron-software-libraries/utility/Buzzer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/gadgetron-software-libraries/utility/Song.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/gadgetron-software-libraries/utility/Adafruit_LEDBackpack.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/gadgetron-software-libraries/utility/glcdfont.c"
  "${CMAKE_CURRENT_LIST_DIR}/gadgetron-software-libraries/Gadgetron.h"
  "${CMAKE_CURRENT_LIST_DIR}/gadgetron-software-libraries/utility/LEDArray.h"
  "${CMAKE_CURRENT_LIST_DIR}/gadgetron-software-libraries/utility/Song.h"
  "${CMAKE_CURRENT_LIST_DIR}/gadgetron-software-libraries/utility/SongData.h"
  "${CMAKE_CURRENT_LIST_DIR}/gadgetron-software-libraries/utility/LED.h"
  "${CMAKE_CURRENT_LIST_DIR}/gadgetron-software-libraries/utility/RGBLED.h"
  "${CMAKE_CURRENT_LIST_DIR}/gadgetron-software-libraries/utility/ServoMotor.h"
  "${CMAKE_CURRENT_LIST_DIR}/gadgetron-software-libraries/utility/DistanceSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/gadgetron-software-libraries/utility/Adafruit_LEDBackpack.h"
  "${CMAKE_CURRENT_LIST_DIR}/gadgetron-software-libraries/utility/Adafruit_GFX.h"
  "${CMAKE_CURRENT_LIST_DIR}/gadgetron-software-libraries/utility/MomentaryButton.h"
  "${CMAKE_CURRENT_LIST_DIR}/gadgetron-software-libraries/utility/NoteFrequencyTable.h"
  "${CMAKE_CURRENT_LIST_DIR}/gadgetron-software-libraries/utility/Pincer.h"
  "${CMAKE_CURRENT_LIST_DIR}/gadgetron-software-libraries/utility/Buzzer.h"
  "${CMAKE_CURRENT_LIST_DIR}/gadgetron-software-libraries/utility/GadgetManager.h"
  "${CMAKE_CURRENT_LIST_DIR}/gadgetron-software-libraries/utility/Motor.h"
)

target_include_directories(gadgetron-libraries INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/gadgetron-software-libraries"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_adafruit-gfx-library)
endif()

target_link_libraries(gadgetron-libraries INTERFACE
    arduino-compat
    adafruit-gfx-library
)
