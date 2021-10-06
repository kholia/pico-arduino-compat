add_library(adafruit-seesaw-library INTERFACE)

target_sources(adafruit-seesaw-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Seesaw/Adafruit_seesaw.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Seesaw/Adafruit_NeoKey_1x4.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Seesaw/Adafruit_miniTFTWing.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Seesaw/seesaw_neopixel.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Seesaw/Adafruit_NeoTrellis.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Seesaw/Adafruit_TFTShield18.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Seesaw/seesaw_servo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Seesaw/Adafruit_Crickit.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Seesaw/Adafruit_TFTShield18.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Seesaw/Adafruit_miniTFTWing.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Seesaw/seesaw_servo.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Seesaw/Adafruit_Crickit.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Seesaw/seesaw_neopixel.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Seesaw/Adafruit_NeoKey_1x4.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Seesaw/Adafruit_NeoTrellis.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Seesaw/seesaw_motor.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Seesaw/Adafruit_seesaw.h"
)

target_include_directories(adafruit-seesaw-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Seesaw"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-seesaw-library INTERFACE
    arduino-compat
    adafruit-busio
)
