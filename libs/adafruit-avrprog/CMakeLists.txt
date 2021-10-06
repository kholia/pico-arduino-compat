add_library(adafruit-avrprog INTERFACE)

target_sources(adafruit-avrprog INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AVRProg/Adafruit_UPDIProg.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AVRProg/Adafruit_AVRProg.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AVRProg/examples/atmega32u4_featherboot/images.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AVRProg/examples/attiny817_updiprog/images.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AVRProg/examples/atmega32u4_catalinafeatherboot/images.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AVRProg/examples/attiny85_rc_calibration/images.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AVRProg/examples/atmega328_optiboot/images.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AVRProg/Adafruit_UPDIProg.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AVRProg/Adafruit_AVRProg.h"
)

target_include_directories(adafruit-avrprog INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AVRProg"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(adafruit-avrprog INTERFACE
    arduino-compat
)
