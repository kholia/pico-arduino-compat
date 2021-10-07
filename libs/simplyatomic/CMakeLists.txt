add_library(pac-simplyatomic INTERFACE)

target_sources(pac-simplyatomic INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SimplyAtomic/SimplyAtomic.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimplyAtomic/esp8266.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimplyAtomic/arm.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimplyAtomic/avr.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimplyAtomic/esp32.h"
)

target_include_directories(pac-simplyatomic INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SimplyAtomic"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-simplyatomic INTERFACE
    arduino-compat
)
