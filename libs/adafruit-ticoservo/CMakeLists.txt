add_library(pac-adafruit-ticoservo INTERFACE)

target_sources(pac-adafruit-ticoservo INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TiCoServo/Adafruit_TiCoServo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TiCoServo/known_16bit_timers.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TiCoServo/Adafruit_TiCoServo.h"
)

target_include_directories(pac-adafruit-ticoservo INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TiCoServo"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adafruit-ticoservo INTERFACE
    arduino-compat
)
