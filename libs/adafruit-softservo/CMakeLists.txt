add_library(pac-adafruit-softservo INTERFACE)

target_sources(pac-adafruit-softservo INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SoftServo/Adafruit_SoftServo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SoftServo/Adafruit_SoftServo.h"
)

target_include_directories(pac-adafruit-softservo INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SoftServo"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adafruit-softservo INTERFACE
    arduino-compat
)
