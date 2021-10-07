add_library(pac-arduino_mchptouch INTERFACE)

target_sources(pac-arduino_mchptouch INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MCHPTouch/src/DataStreamer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MCHPTouch/src/Arduino_MCHPTouch.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MCHPTouch/src/touch.c"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MCHPTouch/src/Arduino_MCHPTouch.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MCHPTouch/src/DataStreamer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MCHPTouch/src/touch_config_samd.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MCHPTouch/src/touch_api_SAMD.h"
)

target_include_directories(pac-arduino_mchptouch INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino_MCHPTouch/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduino_mchptouch INTERFACE
    arduino-compat
)
