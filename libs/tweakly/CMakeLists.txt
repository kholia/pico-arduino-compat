add_library(pac-tweakly INTERFACE)

target_sources(pac-tweakly INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Tweakly/src/user_integrations.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tweakly/src/Tweakly.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tweakly/src/definitions.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tweakly/src/core/timers.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tweakly/src/core/polyphonic.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tweakly/src/core/numbers.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tweakly/src/core/clock.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tweakly/src/core/string.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tweakly/src/core/pads.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tweakly/src/core/machines/esp32.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tweakly/src/core/sounds/down.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tweakly/src/core/sounds/alarm.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tweakly/src/core/sounds/firegun.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tweakly/src/core/sounds/up.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tweakly/src/core/sounds/boing.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tweakly/src/peripherals/sonar.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tweakly/src/peripherals/encoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tweakly/src/apps/TweaklyApps/doList/doList.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tweakly/src/apps/TweaklyApps/inputHunters/inputhunters.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tweakly/src/apps/TweaklyApps/stream/stream.h"
)

target_include_directories(pac-tweakly INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Tweakly/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tweakly INTERFACE
    arduino-compat
)
