add_library(simplyatomic INTERFACE)

target_sources(simplyatomic INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SimplyAtomic/SimplyAtomic.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimplyAtomic/esp8266.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimplyAtomic/arm.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimplyAtomic/avr.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimplyAtomic/esp32.h"
)

target_include_directories(simplyatomic INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SimplyAtomic"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(simplyatomic INTERFACE
    arduino-compat
)
