add_library(pac-hall-switch INTERFACE)

target_sources(pac-hall-switch INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/hall-switch/src/hall-switch-ino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/hall-switch/src/hall-speed-ino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/hall-switch/src/framework/raspberrypi/pal/hall-pal-rpi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/hall-switch/src/framework/raspberrypi/wrapper/hall-platf-rpi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/hall-switch/src/framework/raspberrypi/wrapper/hall-switch-rpi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/hall-switch/src/framework/raspberrypi/examples/hall-polling.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/hall-switch/src/framework/raspberrypi/examples/hall-interrupt.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/hall-switch/src/framework/arduino/pal/hall-pal-ino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/hall-switch/src/framework/arduino/wrapper/hall-platf-ino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/hall-switch/src/framework/wiced-43xxx/pal/hall-pal-wiced.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/hall-switch/src/framework/wiced-43xxx/wrapper/hall-switch-wiced.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/hall-switch/src/framework/wiced-43xxx/wrapper/hall-platf-wiced.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/hall-switch/src/framework/wiced-43xxx/app/hall_switch.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/hall-switch/src/corelib/hall-switch-int.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/hall-switch/src/corelib/hall-switch.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/hall-switch/src/corelib/hall-speed.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/hall-switch/src/hall-switch-ino.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/hall-switch/src/hall-speed-ino.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/hall-switch/src/pal/hall-pal-gpio.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/hall-switch/src/pal/hall-pal-timer.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/hall-switch/src/config/hall-conf-opts.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/hall-switch/src/config/hall-conf.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/hall-switch/src/config/hall-conf-dfl.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/hall-switch/src/framework/raspberrypi/pal/hall-pal-rpi.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/hall-switch/src/framework/raspberrypi/wrapper/hall-switch-rpi.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/hall-switch/src/framework/raspberrypi/wrapper/hall-platf-rpi.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/hall-switch/src/framework/arduino/pal/hall-pal-ino.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/hall-switch/src/framework/arduino/wrapper/hall-platf-ino.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/hall-switch/src/framework/wiced-43xxx/pal/hall-pal-wiced.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/hall-switch/src/framework/wiced-43xxx/wrapper/hall-platf-wiced.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/hall-switch/src/framework/wiced-43xxx/wrapper/hall-switch-wiced.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/hall-switch/src/corelib/hall-switch-int.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/hall-switch/src/corelib/hall-switch.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/hall-switch/src/corelib/hall-speed.hpp"
)

target_include_directories(pac-hall-switch INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/hall-switch/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-hall-switch INTERFACE
    arduino-compat
)
