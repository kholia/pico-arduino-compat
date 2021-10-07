add_library(pac-dimmable-light-for-arduino INTERFACE)

target_sources(pac-dimmable-light-for-arduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Dimmable-Light-Arduino/src/thyristor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Dimmable-Light-Arduino/src/dimmable_light_manager.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Dimmable-Light-Arduino/src/hw_timer_avr.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Dimmable-Light-Arduino/src/dimmable_light.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Dimmable-Light-Arduino/src/dimmable_light_linearized.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Dimmable-Light-Arduino/src/hw_timer_samd.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Dimmable-Light-Arduino/src/hw_timer_esp32.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Dimmable-Light-Arduino/examples/6_8_lights_effects/effect.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Dimmable-Light-Arduino/src/hw_timer_esp8266.c"
  "${CMAKE_CURRENT_LIST_DIR}/Dimmable-Light-Arduino/src/dimmable_light_manager.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dimmable-Light-Arduino/src/dimmable_light.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dimmable-Light-Arduino/src/hw_timer_avr.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dimmable-Light-Arduino/src/thyristor.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dimmable-Light-Arduino/src/circular_queue.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dimmable-Light-Arduino/src/hw_timer_esp8266.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dimmable-Light-Arduino/src/hw_timer_samd.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dimmable-Light-Arduino/src/hw_timer_esp32.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dimmable-Light-Arduino/src/dimmable_light_linearized.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dimmable-Light-Arduino/examples/6_8_lights_effects/effect.h"
)

target_include_directories(pac-dimmable-light-for-arduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Dimmable-Light-Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dimmable-light-for-arduino INTERFACE
    arduino-compat
)
