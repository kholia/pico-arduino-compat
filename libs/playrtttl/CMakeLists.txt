add_library(pac-playrtttl INTERFACE)

target_sources(pac-playrtttl INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PlayRtttl/src/PlayRtttl.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PlayRtttl/examples/ReactionTimeTestGame/TimerOne.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PlayRtttl/examples/ReactionTimeTestGame/MultiFuncShield.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PlayRtttl/examples/PlayChristmasMelodyUSDistance/HCSR04.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PlayRtttl/examples/PlayChristmasMelodyUSDistance/BlinkLed.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PlayRtttl/src/pitches.h"
  "${CMAKE_CURRENT_LIST_DIR}/PlayRtttl/src/PlayRtttl.h"
  "${CMAKE_CURRENT_LIST_DIR}/PlayRtttl/examples/LightToTone/EasyButtonAtInt01.h"
  "${CMAKE_CURRENT_LIST_DIR}/PlayRtttl/examples/LightToTone/digitalWriteFast.h"
  "${CMAKE_CURRENT_LIST_DIR}/PlayRtttl/examples/LightToTone/EasyButtonAtInt01.cpp.h"
  "${CMAKE_CURRENT_LIST_DIR}/PlayRtttl/examples/ReactionTimeTestGame/known_16bit_timers.h"
  "${CMAKE_CURRENT_LIST_DIR}/PlayRtttl/examples/ReactionTimeTestGame/TimerOne.h"
  "${CMAKE_CURRENT_LIST_DIR}/PlayRtttl/examples/ReactionTimeTestGame/Breadboard.h"
  "${CMAKE_CURRENT_LIST_DIR}/PlayRtttl/examples/ReactionTimeTestGame/MultiFuncShield.h"
  "${CMAKE_CURRENT_LIST_DIR}/PlayRtttl/examples/PlayChristmasMelodyUSDistance/BlinkLed.h"
  "${CMAKE_CURRENT_LIST_DIR}/PlayRtttl/examples/PlayChristmasMelodyUSDistance/HCSR04.h"
)

target_include_directories(pac-playrtttl INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PlayRtttl/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-playrtttl INTERFACE
    arduino-compat
)
