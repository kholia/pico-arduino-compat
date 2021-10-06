add_library(timer-cam INTERFACE)

target_sources(timer-cam INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TimerCam-arduino/src/app_httpd.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TimerCam-arduino/src/battery.c"
  "${CMAKE_CURRENT_LIST_DIR}/TimerCam-arduino/src/bmm8563.c"
  "${CMAKE_CURRENT_LIST_DIR}/TimerCam-arduino/src/led.c"
  "${CMAKE_CURRENT_LIST_DIR}/TimerCam-arduino/src/led.h"
  "${CMAKE_CURRENT_LIST_DIR}/TimerCam-arduino/src/bmm8563.h"
  "${CMAKE_CURRENT_LIST_DIR}/TimerCam-arduino/src/battery.h"
  "${CMAKE_CURRENT_LIST_DIR}/TimerCam-arduino/src/camera_index.h"
  "${CMAKE_CURRENT_LIST_DIR}/TimerCam-arduino/src/camera_pins.h"
)

target_include_directories(timer-cam INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TimerCam-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(timer-cam INTERFACE
    arduino-compat
)
