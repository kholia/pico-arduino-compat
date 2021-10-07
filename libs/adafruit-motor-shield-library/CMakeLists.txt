add_library(pac-adafruit-motor-shield-library INTERFACE)

target_sources(pac-adafruit-motor-shield-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-Motor-Shield-library/AFMotor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-Motor-Shield-library/AFMotor.h"
)

target_include_directories(pac-adafruit-motor-shield-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit-Motor-Shield-library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adafruit-motor-shield-library INTERFACE
    arduino-compat
)
